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
/******************************************************************************
 *  MSP432 I2C - EUSCI_B0_BASE I2C Master TX  bytes to MSP432 Slave - Repeated Start
 *
 *  Description: This demo connects two MSP432 's via the I2C bus. The master
 *  transmits to the slave. This is the SLAVE CODE. It continuously
 *  transmits an array of data and demonstrates how to implement an I2C
 *  master transmitter sending multiple bytes followed by a repeated start,
 *  followed by a read of multiple bytes.  This is a common operation for
 *  reading register values from I2C slave devices such as sensors. The
 *  transaction for the I2C that is written looks as follows:
 *
 *  ________________________________________________________________
 *  |  Start   |      |      |  Start   |                   |       |
 *  | 0x48Addr | 0x04 | 0x00 | 0x48Addr |  <10 Byte Read>   | Stop  |
 *  |    W     |      |      |    R     |                   |       |
 *  |__________|______|______|__________|___________________|_______|
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
 *
 * Author: Timothy Logan
 *****************************************************************************/
/* DriverLib Includes */
#include "driverlib.h"

/* Standard Includes */
#include <stdint.h>

#include <stdbool.h>

/* Application Defines */
#define SLAVE_ADDRESS       0x48
#define NUM_OF_RX_BYTES        2
#define NUM_OF_TX_BYTES       10

/* Application Variables */
static volatile uint8_t RXData[NUM_OF_RX_BYTES];
static volatile uint32_t xferIndex;
const uint32_t TXData[NUM_OF_TX_BYTES + 1] =
{ 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0x10 };

int main(void)
{
    /* Disabling the Watchdog  */
    MAP_WDT_A_holdTimer();
    xferIndex = 0;

    /* Select Port 1 for I2C - Set Pin 6, 7 to input Primary Module Function,
     *   (UCB0SIMO/UCB0SDA, UCB0SOMI/UCB0SCL).
     */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P1,
            GPIO_PIN6 + GPIO_PIN7, GPIO_PRIMARY_MODULE_FUNCTION);

    /* eUSCI I2C Slave Configuration */
    MAP_I2C_initSlave(EUSCI_B0_BASE, SLAVE_ADDRESS, EUSCI_B_I2C_OWN_ADDRESS_OFFSET0,
            EUSCI_B_I2C_OWN_ADDRESS_ENABLE);

    /* Enable the module and enable interrupts */
    MAP_I2C_enableModule(EUSCI_B0_BASE);
    MAP_I2C_clearInterruptFlag(EUSCI_B0_BASE, EUSCI_B_I2C_RECEIVE_INTERRUPT0);
    MAP_I2C_enableInterrupt(EUSCI_B0_BASE, EUSCI_B_I2C_RECEIVE_INTERRUPT0);
    MAP_Interrupt_enableInterrupt(INT_EUSCIB0);
    MAP_Interrupt_enableSleepOnIsrExit();
    MAP_Interrupt_enableMaster();

    /* Sleeping while not in use */
    while (1)
    {
        MAP_PCM_gotoLPM0();
    }
}

/*******************************************************************************
 * eUSCIB0 ISR. The repeated start and transmit/receive operations happen
 * within this ISR.
 ******************************************************************************/
void EUSCIB0_IRQHandler(void)
{
    uint_fast16_t status;

    status = MAP_I2C_getEnabledInterruptStatus(EUSCI_B0_BASE);
    MAP_I2C_clearInterruptFlag(EUSCI_B0_BASE, status);

    /* RXIFG */
    if (status & EUSCI_B_I2C_RECEIVE_INTERRUPT0)
    {
        RXData[xferIndex++] = MAP_I2C_slaveGetData(EUSCI_B0_BASE);

        /* Resetting the index if we are at the end */
        if (xferIndex == NUM_OF_RX_BYTES)
        {
            xferIndex = 0;
            MAP_I2C_disableInterrupt(EUSCI_B0_BASE, EUSCI_B_I2C_RECEIVE_INTERRUPT0);
            MAP_I2C_enableInterrupt(EUSCI_B0_BASE, EUSCI_B_I2C_TRANSMIT_INTERRUPT0);
        }
    }

    /* TXIFG */
    if (status & EUSCI_B_I2C_TRANSMIT_INTERRUPT0)
    {
        MAP_I2C_slavePutData(EUSCI_B0_BASE, TXData[xferIndex++]);

        /* Resetting the index if we are at the end */
        if (xferIndex == NUM_OF_TX_BYTES)
        {
            xferIndex = 0;
            MAP_I2C_disableInterrupt(EUSCI_B0_BASE, EUSCI_B_I2C_TRANSMIT_INTERRUPT0);
            MAP_I2C_enableInterrupt(EUSCI_B0_BASE, EUSCI_B_I2C_RECEIVE_INTERRUPT0);
        }
    }
}
