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
 * MSP432 DMA - eUSCI I2C Transfer Using DMA
 *
 * Description: In this code example, the MSP432 's DMA controller is used in 
 * conjunction with an I2C loopback configuration to demonstrate how to use
 * hardware triggered DMA transfers. Two DMA transfers are setup using two 
 * different channels. Channel 2 is used for the DMA transfer and Channel 5 is
 * used for the DMA receive. Once the transfers are setup and initialized, the
 * device is put to sleep. While sleeping, the DMA controller will automatically
 * transfer the data from the const array and out through the uESCI B1 I2C
 * module as a master. The slave, which is setup on eUSCI B2, will automatically
 * trigger the DMA controller to place the incoming data in a RAM buffer called
 * recBuffer. When the DMA transfer is complete, an interrupt will be fired and
 * the master will send a stop condition out over the I2C Line.
 *
 * This program runs infinitely until manually halted by the user.
 *
 *                MSP432P401
 *             ------------------
 *         /|\|                  | <10k Pull-Up> 
 *          | |                  |   | |
 *          --|RST    P6.5 (SDA) |---|---------
 *            |       P6.4 (SCL) |----------  |
 *            |                  |         |  |  
 *            |       P3.6 (SCL) |----------  |
 *            |       P3.7 (SCL) |-------------
 *            |                  |
 *
 * Author: Timothy Logan
 ******************************************************************************/
/* DriverLib Includes */
#include "driverlib.h"

/* Standard Includes */
#include <stdint.h>

#include <string.h>
#include <stdbool.h>

/* Statics */
static uint8_t recBuffer[1024];
static volatile bool sendStopCondition;

/* I2C Configuration Parameter */
const eUSCI_I2C_MasterConfig i2cMasterConf =
{
        EUSCI_B_I2C_CLOCKSOURCE_SMCLK,          // SMCLK Clock Source
        3000000,                                // SMCLK = 3MHz
        EUSCI_B_I2C_SET_DATA_RATE_100KBPS,      // Desired I2C Clock of 100khz
        0,                                      // No Auto Stop
        EUSCI_B_I2C_NO_AUTO_STOP                // No Auto Stop
};

/* DMA Control Table */
#ifdef ewarm
#pragma data_alignment=1024
#else
#pragma DATA_ALIGN(controlTable, 1024)
#endif
uint8_t controlTable[1024];

/* Extern */
extern uint8_t data_array[];


int main(void)
{
    /* Halting Watchdog */
    MAP_WDT_A_holdTimer();

    /* Initializing */
    memset(recBuffer, 0x00, 1024);
    sendStopCondition = false;

    /* Initializing I2C Master on EUSCIB1  at 400Khz */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P6,
            GPIO_PIN4 | GPIO_PIN5, GPIO_PRIMARY_MODULE_FUNCTION);
    MAP_I2C_initMaster(EUSCI_B1_BASE, &i2cMasterConf);
    MAP_I2C_setSlaveAddress(EUSCI_B1_BASE, 0x48);
    MAP_I2C_setMode(EUSCI_B1_BASE, EUSCI_B_I2C_TRANSMIT_MODE);
    MAP_I2C_enableModule(EUSCI_B1_BASE);

    /* Initializing I2C Slave on EUSCIB2 with address 0x48 */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P3,
            GPIO_PIN6 + GPIO_PIN7, GPIO_PRIMARY_MODULE_FUNCTION);
    MAP_I2C_initSlave(EUSCI_B2_BASE, 0x48, EUSCI_B_I2C_OWN_ADDRESS_OFFSET0,
            EUSCI_B_I2C_OWN_ADDRESS_ENABLE);
    MAP_I2C_enableModule(EUSCI_B2_BASE);

    /* Configuring DMA module */
    MAP_DMA_enableModule();
    MAP_DMA_setControlBase(controlTable);

    /* Assigning Channel 2 to EUSCIB1TX0, and Channel 5 to EUSCIB2RX0  and
     * enabling channels 2 and 5*/
    MAP_DMA_assignChannel(DMA_CH2_EUSCIB1TX0);
    MAP_DMA_assignChannel(DMA_CH5_EUSCIB2RX0);

     /* Disabling channel attributes */
    MAP_DMA_disableChannelAttribute(DMA_CH2_EUSCIB1TX0,
                                     UDMA_ATTR_ALTSELECT | UDMA_ATTR_USEBURST |
                                     UDMA_ATTR_HIGH_PRIORITY |
                                     UDMA_ATTR_REQMASK);
    MAP_DMA_disableChannelAttribute(DMA_CH5_EUSCIB2RX0,
                                     UDMA_ATTR_ALTSELECT | UDMA_ATTR_USEBURST |
                                     UDMA_ATTR_HIGH_PRIORITY |
                                     UDMA_ATTR_REQMASK);


    /* Setting Control Indexes */
    MAP_DMA_setChannelControl(UDMA_PRI_SELECT | DMA_CH2_EUSCIB1TX0,
            UDMA_SIZE_8 | UDMA_SRC_INC_8 | UDMA_DST_INC_NONE | UDMA_ARB_1);
    MAP_DMA_setChannelControl(UDMA_PRI_SELECT | DMA_CH5_EUSCIB2RX0,
           UDMA_SIZE_8 | UDMA_SRC_INC_NONE | UDMA_DST_INC_8 | UDMA_ARB_1);
    MAP_DMA_setChannelTransfer(UDMA_PRI_SELECT | DMA_CH2_EUSCIB1TX0,
            UDMA_MODE_BASIC, data_array,
            (void*) MAP_I2C_getTransmitBufferAddressForDMA(EUSCI_B1_BASE), 1024);
    MAP_DMA_setChannelTransfer(UDMA_PRI_SELECT | DMA_CH5_EUSCIB2RX0,
            UDMA_MODE_BASIC,
            (void*)MAP_I2C_getReceiveBufferAddressForDMA(EUSCI_B2_BASE), recBuffer,
            1024);

    /* Assigning/Enabling Interrupts */
    MAP_DMA_assignInterrupt(DMA_INT1, 2);
    MAP_Interrupt_enableInterrupt(INT_DMA_INT1);

    /* Now that the DMA is primed and setup, enabling the channels. The EUSCI
     * hardware should take over and transfer/receive all bytes */
    MAP_DMA_enableChannel(2);
    MAP_DMA_enableChannel(5);

    /* Sending the start condition */
    MAP_I2C_masterSendStart(EUSCI_B1_BASE);
    while(!MAP_I2C_masterIsStartSent(EUSCI_B1_BASE));

    while(1)
    {
        if(sendStopCondition)
        {
            MAP_I2C_masterSendMultiByteStop(EUSCI_B1_BASE);
        }

        MAP_PCM_gotoLPM0InterruptSafe();
    }
}

/* Completion interrupt for eUSCIB1 TX */
void DMA_INT1_IRQHandler(void)
{
    /* Disabling the completion interrupt and disabling the DMA channels */
    MAP_DMA_disableChannel(2);
    MAP_DMA_disableInterrupt(INT_DMA_INT1);
    sendStopCondition = true;
}
