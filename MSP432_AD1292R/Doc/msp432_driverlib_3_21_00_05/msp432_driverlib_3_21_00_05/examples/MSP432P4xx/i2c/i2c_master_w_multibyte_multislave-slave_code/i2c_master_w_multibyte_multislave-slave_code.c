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
 *  MSP432 I2C - EUSCI_B0_BASE I2C Master TX multiple bytes to multiple MSP432 Slaves
 *
 *  Description: In this example, the MSP432 is used in master mode to transmit
 *  a byte array to multiple I2C slaves using the same EUSCI module. This is
 *  the SLAVE code. In this code, a slave I2C device is initiated on EUSCIB0
 *  which to initialize two separate slave addresses. In the ISR for I2C,
 *  there are two separate receive ISRs for each slave address. The received
 *  data is placed into two separate buffers.
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
#define SLAVE_ADDRESS_1     0x48
#define SLAVE_ADDRESS_2     0x49
#define NUM_OF_RX_BYTES     4

/* Statics */
static volatile uint8_t RXData_0[NUM_OF_RX_BYTES];
static volatile uint32_t xferIndex_0;
static volatile uint8_t RXData_1[NUM_OF_RX_BYTES];
static volatile uint32_t xferIndex_1;

int main(void)
{
    /* Disabling the Watchdog */
    MAP_WDT_A_holdTimer();
    xferIndex_0 = 0;
    xferIndex_1 = 0;

    /* Select Port 1 for I2C - Set Pin 6, 7 to input Primary Module Function,
     *   (UCB0SIMO/UCB0SDA, UCB0SOMI/UCB0SCL).
     */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P1,
        GPIO_PIN6 + GPIO_PIN7, GPIO_PRIMARY_MODULE_FUNCTION);

    /* eUSCI I2C Slave Configuration */

    /* Slave Address 1 (0x48) */
    MAP_I2C_initSlave(EUSCI_B0_BASE, SLAVE_ADDRESS_1,
            EUSCI_B_I2C_OWN_ADDRESS_OFFSET0,
            EUSCI_B_I2C_OWN_ADDRESS_ENABLE);

    /* Slave Address 1 (0x49) */
    MAP_I2C_initSlave(EUSCI_B0_BASE, SLAVE_ADDRESS_2,
            EUSCI_B_I2C_OWN_ADDRESS_OFFSET1,
            EUSCI_B_I2C_OWN_ADDRESS_ENABLE);

    /* Set in receive mode */
    MAP_I2C_setMode(EUSCI_B0_BASE, EUSCI_B_I2C_RECEIVE_MODE);

    /* Enable the module and enable interrupts */
    MAP_I2C_enableModule(EUSCI_B0_BASE);
    MAP_I2C_clearInterruptFlag(EUSCI_B0_BASE,
    EUSCI_B_I2C_RECEIVE_INTERRUPT0 | EUSCI_B_I2C_RECEIVE_INTERRUPT1);
    MAP_I2C_enableInterrupt(EUSCI_B0_BASE,
        EUSCI_B_I2C_RECEIVE_INTERRUPT0 | EUSCI_B_I2C_RECEIVE_INTERRUPT1);
    MAP_Interrupt_enableSleepOnIsrExit();
    MAP_Interrupt_enableInterrupt(INT_EUSCIB0);
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

    /* RXIFG for Slave Address 1*/
    if (status & EUSCI_B_I2C_RECEIVE_INTERRUPT0)
    {
        RXData_0[xferIndex_0++] = MAP_I2C_slaveGetData(EUSCI_B0_BASE);

        /* Resetting the index if we are at the end */
        if (xferIndex_0 == NUM_OF_RX_BYTES)
            xferIndex_0 = 0;
    }

    /* RXIFG for Slave Address 1*/
    if (status & EUSCI_B_I2C_RECEIVE_INTERRUPT1)
    {
        RXData_1[xferIndex_1++] = MAP_I2C_slaveGetData(EUSCI_B0_BASE);

        /* Resetting the index if we are at the end */
        if (xferIndex_1 == NUM_OF_RX_BYTES)
            xferIndex_1 = 0;
    }
}
