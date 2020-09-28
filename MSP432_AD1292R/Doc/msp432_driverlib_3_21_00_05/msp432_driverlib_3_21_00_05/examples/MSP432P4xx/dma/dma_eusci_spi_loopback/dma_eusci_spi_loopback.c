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
 * MSP432 DMA - eUSCI SPI Transfer Using DMA
 *
 * Description: In this code example, the MSP432 's DMA controller is used in
 * conjunction with an SPI loopback configuration to demonstrate how to use
 * hardware triggered DMA transfers. Four DMA transfers are setup using four
 * separate DMA channels. For each SPI instance, a DMA channel is setup to
 * receive and transfer from the SIMO and SOMI ports respectively. After an
 * arbitrary string is sent through SPI via the loopback configuration, an
 * ISR counter is incremented and triggers a NOP condition in the main loop
 * where the user can set a breakpoint to examine memory contents.
 *
 *
 *                      MSP432P401
 *             ---------------------------
 *         /|\|                          |
 *          | |                          |
 *          --|RST           P1.5 (CLK)  |-------------
 *            |              P1.7 (SIMO) |----------  |
 *            |              P1.6 (SOMI) |-------- |  |
 *            |                          |       | |  |
 *            |                          |       | |  |
 *            |              P3.6 (SIMO) |-------- |  |
 *            |              P3.7 (SOMI) |----------  |
 *            |              P3.5 (CLK)  |-------------
 *            |                          |
 *            |                          |
 *
 * Author: Timothy Logan
 ******************************************************************************/

/* DriverLib Includes */
#include "driverlib.h"

/* Standard Includes */
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

/* SPI Configuration Parameter */
const eUSCI_SPI_MasterConfig spiMasterConfig =
{ EUSCI_B_SPI_CLOCKSOURCE_SMCLK, 12000000, 1000000,
        EUSCI_B_SPI_MSB_FIRST,
        EUSCI_B_SPI_PHASE_DATA_CAPTURED_ONFIRST_CHANGED_ON_NEXT,
        EUSCI_B_SPI_CLOCKPOLARITY_INACTIVITY_HIGH, EUSCI_B_SPI_3PIN };

const eUSCI_SPI_SlaveConfig spiSlaveConfig =
{ EUSCI_B_SPI_MSB_FIRST,
        EUSCI_B_SPI_PHASE_DATA_CAPTURED_ONFIRST_CHANGED_ON_NEXT,
        EUSCI_B_SPI_CLOCKPOLARITY_INACTIVITY_HIGH,
        EUSCI_B_SPI_3PIN
        };

/* DMA Control Table */
#if defined(__TI_COMPILER_VERSION__)
#pragma DATA_ALIGN(MSP_EXP432P401RLP_DMAControlTable, 1024)
#elif defined(__IAR_SYSTEMS_ICC__)
#pragma data_alignment=1024
#elif defined(__GNUC__)
__attribute__ ((aligned (1024)))
#elif defined(__CC_ARM)
__align(1024)
#endif
static DMA_ControlTable MSP_EXP432P401RLP_DMAControlTable[32];

#define MAP_SPI_MSG_LENGTH    26

uint32_t isrCounter = 0;
uint8_t mstxData[26] = "Hello, this is master SPI";
uint8_t msrxData[26] =
{ 0 };
uint8_t sltxData[26] = "Hello, this is slave SPI";
uint8_t slrxData[26] =
{ 0 };

int main(void)
{
    volatile uint32_t ii;
    
    /* Halting Watchdog */
    MAP_WDT_A_holdTimer();

    /* Configure CLK, MOSI & MISO for SPI0 (EUSCI_B0) */
    MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P1,
            GPIO_PIN5 | GPIO_PIN6, GPIO_PRIMARY_MODULE_FUNCTION);
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P1,
            GPIO_PIN7, GPIO_PRIMARY_MODULE_FUNCTION);

    /* Configure SLAVE CLK, MOSI and SPMI (EUSCI_B2) */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P3,
            GPIO_PIN5 | GPIO_PIN6 | GPIO_PIN7,
            GPIO_PRIMARY_MODULE_FUNCTION);

    /* Configuring SPI module */
    MAP_SPI_initSlave(EUSCI_B2_BASE, &spiSlaveConfig);
    MAP_SPI_initMaster(EUSCI_B0_BASE, &spiMasterConfig);

    /* Enable the SPI module */
    MAP_SPI_enableModule(EUSCI_B2_BASE);
    MAP_SPI_enableModule(EUSCI_B0_BASE);

    /* Configuring DMA module */
    MAP_DMA_enableModule();
    MAP_DMA_setControlBase(MSP_EXP432P401RLP_DMAControlTable);

    /* Assign DMA channel 0 to EUSCI_B0_TX0, channel 1 to EUSCI_B0_RX0 */
    MAP_DMA_assignChannel(DMA_CH0_EUSCIB0TX0);
    MAP_DMA_assignChannel(DMA_CH1_EUSCIB0RX0);
    MAP_DMA_assignChannel(DMA_CH4_EUSCIB2TX0);
    MAP_DMA_assignChannel(DMA_CH5_EUSCIB2RX0);

    /* Setup the TX transfer characteristics & buffers */
    MAP_DMA_setChannelControl(DMA_CH0_EUSCIB0TX0 | UDMA_PRI_SELECT,
    UDMA_SIZE_8 | UDMA_SRC_INC_8 | UDMA_DST_INC_NONE | UDMA_ARB_1);
    MAP_DMA_setChannelTransfer(DMA_CH0_EUSCIB0TX0 | UDMA_PRI_SELECT,
    UDMA_MODE_BASIC, mstxData,
            (void *) MAP_SPI_getTransmitBufferAddressForDMA(EUSCI_B0_BASE),
            MAP_SPI_MSG_LENGTH);

    /* Setup the RX transfer characteristics & buffers */
    MAP_DMA_setChannelControl(DMA_CH1_EUSCIB0RX0 | UDMA_PRI_SELECT,
    UDMA_SIZE_8 | UDMA_SRC_INC_NONE | UDMA_DST_INC_8 | UDMA_ARB_1);
    MAP_DMA_setChannelTransfer(DMA_CH1_EUSCIB0RX0 | UDMA_PRI_SELECT,
    UDMA_MODE_BASIC,
            (void *) MAP_SPI_getReceiveBufferAddressForDMA(EUSCI_B0_BASE),
            msrxData,
            MAP_SPI_MSG_LENGTH);

    /* Slave Settings */
    MAP_DMA_setChannelControl(DMA_CH4_EUSCIB2TX0 | UDMA_PRI_SELECT,
    UDMA_SIZE_8 | UDMA_SRC_INC_8 | UDMA_DST_INC_NONE | UDMA_ARB_1);
    MAP_DMA_setChannelTransfer(DMA_CH4_EUSCIB2TX0 | UDMA_PRI_SELECT,
    UDMA_MODE_BASIC, sltxData,
            (void *) MAP_SPI_getTransmitBufferAddressForDMA(EUSCI_B2_BASE),
            MAP_SPI_MSG_LENGTH);

    /* Setup the RX transfer characteristics & buffers */
    MAP_DMA_setChannelControl(DMA_CH5_EUSCIB2RX0 | UDMA_PRI_SELECT,
    UDMA_SIZE_8 | UDMA_SRC_INC_NONE | UDMA_DST_INC_8 | UDMA_ARB_1);
    MAP_DMA_setChannelTransfer(DMA_CH5_EUSCIB2RX0 | UDMA_PRI_SELECT,
    UDMA_MODE_BASIC,
            (void *) MAP_SPI_getReceiveBufferAddressForDMA(EUSCI_B2_BASE),
            slrxData,
            MAP_SPI_MSG_LENGTH);

    /* Enable DMA interrupt */
    MAP_DMA_assignInterrupt(INT_DMA_INT1, 1);
    MAP_DMA_clearInterruptFlag(DMA_CH1_EUSCIB0RX0 & 0x0F);

    /* Assigning/Enabling Interrupts */
    MAP_Interrupt_enableInterrupt(INT_DMA_INT1);
    MAP_DMA_enableInterrupt(INT_DMA_INT1);
    MAP_DMA_enableChannel(5);
    MAP_DMA_enableChannel(4);

    /* Delaying for forty cycles to let the master catch up with the slave */
    for(ii=0;ii<50;ii++);

    MAP_DMA_enableChannel(1);
    MAP_DMA_enableChannel(0);

    /* Polling to see if the master receive is finished */
    while (1)
    {
        if (isrCounter > 0)
        {
            __no_operation();
        }
    }

}

void DMA_INT1_IRQHandler(void)
{
    isrCounter++;
    MAP_DMA_clearInterruptFlag(0);
    MAP_DMA_clearInterruptFlag(1);

    /* Disable the interrupt to allow execution */
    MAP_Interrupt_disableInterrupt(INT_DMA_INT1);
    MAP_DMA_disableInterrupt(INT_DMA_INT1);
}
