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
 *  enabled. This is the SLAVE code.
 *
 *  ACLK = n/a, MCLK = HSMCLK = SMCLK = BRCLK = default DCO = ~3.0MHz
 *
 *                                /|\  /|\
 *                MSP432P401      10k  10k      MSP432P401
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

/* Application Defines */
#define SLAVE_ADDRESS_1     0x48
#define NUM_OF_RX_BYTES     4

/* Transfer data. The first byte of this array is the length of the array */
const uint8_t TXData[NUM_OF_RX_BYTES] = {NUM_OF_RX_BYTES, 0xBE, 0xEF, 0xA5};

/* Statics */
static volatile uint32_t xferIndex;

int main(void)
{
    uint32_t ii;

    /* Disabling the Watchdog  */
    MAP_WDT_A_holdTimer();
    xferIndex = 0;

    /* Select Port 1 for I2C - Set Pin 6, 7 to input Primary Module Function,
     *   (UCB0SIMO/UCB0SDA, UCB0SOMI/UCB0SCL).
     */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P1,
            GPIO_PIN6 + GPIO_PIN7, GPIO_PRIMARY_MODULE_FUNCTION);

    /* Configuring GPIO P5.5 to be an input. As the GPIO is pulled up by the
     * master, when the port is set to an input the pull-up defaults and the
     * pin is high. When the interrupt is asserted, we set the GPIO to an
     * output low and cause the interrupt to occur.
     */
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P5, GPIO_PIN5);
    MAP_GPIO_setAsInputPin(GPIO_PORT_P5, GPIO_PIN5);

    /* eUSCI I2C Slave Configuration */
    MAP_I2C_initSlave(EUSCI_B0_BASE, SLAVE_ADDRESS_1, EUSCI_B_I2C_OWN_ADDRESS_OFFSET0,
            EUSCI_B_I2C_OWN_ADDRESS_ENABLE);

    /* Enable the module and enable interrupts */
    MAP_I2C_enableModule(EUSCI_B0_BASE);
    MAP_Interrupt_enableInterrupt(INT_EUSCIB0);

    /* Sleeping while not in use */
    while (1)
    {
        /* Delaying between transactions */
        for(ii=0;ii<4000;ii++);

        /* Initiating the read from the master by asserting our GPIO */
        MAP_I2C_enableInterrupt(EUSCI_B0_BASE, EUSCI_B_I2C_TRANSMIT_INTERRUPT0);
        MAP_GPIO_setAsOutputPin(GPIO_PORT_P5, GPIO_PIN5);

        MAP_Interrupt_enableSleepOnIsrExit();
        MAP_PCM_gotoLPM0InterruptSafe();
        
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

    /* RXIFG for Slave Address 1*/
    if (status & EUSCI_B_I2C_TRANSMIT_INTERRUPT0)
    {
        MAP_I2C_slavePutData(EUSCI_B0_BASE, TXData[xferIndex++]);

        /* Resetting the index if we are at the end. Also resetting the GPIO
         * if we are on the last byte */
        if (xferIndex  == NUM_OF_RX_BYTES)
        {
            MAP_I2C_disableInterrupt(EUSCI_B0_BASE, EUSCI_B_I2C_TRANSMIT_INTERRUPT0);
            MAP_GPIO_setAsInputPin(GPIO_PORT_P5, GPIO_PIN5);
            MAP_Interrupt_disableSleepOnIsrExit();
            xferIndex = 0;

            /* IMPORTANT: Clearing out the TX Buffer for the next transfer.
             * This is required to compensate for the shift/buffer settings
             * of the I2C module */
            MAP_I2C_slavePutData(EUSCI_B0_BASE, 0);
        }
    }
}
