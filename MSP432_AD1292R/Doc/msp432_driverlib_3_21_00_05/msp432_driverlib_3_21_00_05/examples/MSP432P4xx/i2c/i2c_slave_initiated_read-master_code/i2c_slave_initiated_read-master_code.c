/*
 * -------------------------------------------
 *    MSP432 DriverLib - v3_21_00_05 
 * -------------------------------------------
 *
 * --COPYRIGHT--,BSD,BSD
 * Copyright (c) 2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * --/COPYRIGHT--*/
/*******************************************************************************
 *  MSP432 I2C - EUSCI_B0_BASE I2C Slave Initiated Read from Master
 *
 *  Description: This example demonstrates the use case where the slave needs
 *  to initiate a transfer from the master. This is often done in sensor
 *  applications and other applications where the slave has to progressively
 *  send data to the master when there is new data (perhaps from a sensor) to
 *  be sent. A GPIO port is used to wake-up the master and initiate the
 *  master to read data from the slave. In this case, the first byte of the
 *  master read will be the number of bytes (including the length byte) that
 *  the master should read. The GPIO pin is set as an input with a pull-up
 *  enabled. This is the MASTER code.
 *
 *  ACLK = n/a, MCLK = HSMCLK = SMCLK = BRCLK = default DCO = ~3.0MHz
 *
 *                                /|\  /|\
 *                MSP432P401   10k  10k      MSP432P401
 *                   slave         |    |         master
 *             -----------------   |    |   -----------------
 *            |     P1.6/UCB0SDA|<-|----+->|P1.6/UCB0SDA     |
 *            |                 |  |       |                 |
 *            |                 |  |       |                 |
 *            |     P1.7/UCB0SCL|<-+------>|P1.7/UCB0SCL     |
 *            |                 |          |                 |
 *            |        P5.5/GPIO|<-------->|P5.5/GPIO        |
 *            |                 |          |                 |
 *
 * Author: Timothy Logan
 ******************************************************************************/
/* DriverLib Includes */
#include "driverlib.h"

/* Standard Includes */
#include <stdint.h>

#include <stdbool.h>

/* Slave Address */
#define SLAVE_ADDRESS_1     0x48

/* Statics */
static volatile uint8_t RXData[4];
static volatile uint32_t xferIndex;
static volatile uint32_t numOfRecBytes;

/* I2C Master Configuration Parameter */
const eUSCI_I2C_MasterConfig i2cConfig =
{
        EUSCI_B_I2C_CLOCKSOURCE_SMCLK,          // SMCLK Clock Source
        3000000,                                // SMCLK = 3MHz
        EUSCI_B_I2C_SET_DATA_RATE_100KBPS,      // Desired I2C Clock of 400khz
        0,                                      // No byte counter threshold
        EUSCI_B_I2C_NO_AUTO_STOP                // No Autostop
};

int main(void)
{
    /* Disabling the Watchdog  */
    MAP_WDT_A_holdTimer();
    xferIndex = 0;

    /* Select Port 1 for I2C - Set Pin 6, 7 to input Primary Module Function,
     *   (UCB0SIMO/UCB0SDA, UCB0SOMI/UCB0SCL). and setting P5.5 for input mode
     *   with pull-up enabled
     */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P1,
            GPIO_PIN6 + GPIO_PIN7, GPIO_PRIMARY_MODULE_FUNCTION);
    MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P5, GPIO_PIN5);

    /* Initializing I2C Master to SMCLK at 100khz with no autostop */
    MAP_I2C_initMaster(EUSCI_B0_BASE, &i2cConfig);
    MAP_I2C_setSlaveAddress(EUSCI_B0_BASE,SLAVE_ADDRESS_1);

    /* Set in receive mode */
    MAP_I2C_setMode(EUSCI_B0_BASE, EUSCI_B_I2C_RECEIVE_MODE);

    /* Clearing interrupts for I2C and enabling the module */
    MAP_I2C_enableModule(EUSCI_B0_BASE);
    MAP_I2C_clearInterruptFlag(EUSCI_B0_BASE, EUSCI_B_I2C_RECEIVE_INTERRUPT0);

    /* Clearing/Enabling interrupts for GPIO P5.5 */
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P5, GPIO_PIN5);
    MAP_GPIO_interruptEdgeSelect(GPIO_PORT_P5, GPIO_PIN5,
                GPIO_HIGH_TO_LOW_TRANSITION);
    MAP_GPIO_enableInterrupt(GPIO_PORT_P5, GPIO_PIN5);
    MAP_Interrupt_enableInterrupt(INT_PORT5);
    MAP_Interrupt_enableInterrupt(INT_EUSCIB0);
    MAP_Interrupt_enableSleepOnIsrExit();

    /* Enabling master interrupts */
    MAP_Interrupt_enableMaster();

    /* Sleeping while not in use */
    while (1)
    {
        MAP_PCM_gotoLPM0();
    }
}

/******************************************************************************
 * The USCI_B0 data ISR RX vector is used to move received data from the I2C
 * master to the MSP432 memory.
 ******************************************************************************/
void EUSCIB0_IRQHandler(void)
{
    uint_fast16_t status;

    status = MAP_I2C_getEnabledInterruptStatus(EUSCI_B0_BASE);
    MAP_I2C_clearInterruptFlag(EUSCI_B0_BASE, status);

    /* RXIFG */
    if (status & EUSCI_B_I2C_RECEIVE_INTERRUPT0)
    {
        if(xferIndex == numOfRecBytes - 2)
        {
            MAP_I2C_masterReceiveMultiByteStop(EUSCI_B0_BASE);
        }

        RXData[xferIndex++] = MAP_I2C_masterReceiveMultiByteNext(EUSCI_B0_BASE);

        /* The first byte of the transfer is how many bytes (including the
         * length byte) that the master should read */
        if(xferIndex == 1)
        {
            numOfRecBytes = RXData[0];
        }
        else if(xferIndex == numOfRecBytes)
        {
            MAP_I2C_disableInterrupt(EUSCI_B0_BASE, EUSCI_B_I2C_RECEIVE_INTERRUPT0);
            MAP_GPIO_enableInterrupt(GPIO_PORT_P5, GPIO_PIN5);
            xferIndex = 0;
            numOfRecBytes = 0;
        }

    }

}

/* ISR that handles slave initiated GPIO interrupt. In this interrupt, the
 * master will initiate the read from the slave.
 */
void PORT5_IRQHandler(void)
{
    uint_fast16_t status;

    status = MAP_GPIO_getEnabledInterruptStatus(GPIO_PORT_P5);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P5, status);

    /* If P1.0 was interrupted, initiate an I2C read */
    if (status & GPIO_PIN5)
    {
        MAP_I2C_masterReceiveStart(EUSCI_B0_BASE);
        MAP_I2C_enableInterrupt(EUSCI_B0_BASE, EUSCI_B_I2C_RECEIVE_INTERRUPT0);
        MAP_GPIO_disableInterrupt(GPIO_PORT_P5, GPIO_PIN5);
    }
}
