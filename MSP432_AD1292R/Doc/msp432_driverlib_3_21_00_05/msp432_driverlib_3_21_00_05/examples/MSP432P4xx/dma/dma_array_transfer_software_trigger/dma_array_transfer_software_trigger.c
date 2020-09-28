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
 * MSP432 DMA - Software Transfer Between Addresses
 *
 * Description: In this code example, a software initiated DMA transfer is
 * setup and executed to transfer the contents of one data array to another
 * location in memory. This is the simplest use case for the DMA functionality
 * and shows users the benefit of using the DMA module to optimize power
 * efficiency. Once the DMA transfer is setup, the device is put in sleep mode
 * and the transfer waits to be completed. Once the transfer interrupt occurs,
 * a flag is set and the execution is put into a perpetual while loop to
 * signify to the user that the DMA transfer has completed.
 *
 *              MSP432P401
 *             ------------------
 *         /|\|                  |
 *          | |                  |
 *          --|RST               |
 *            |                  |
 *            |                  |
 *            |                  |
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
static bool isFinished;
static uint8_t destinationArray[1024];

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

    /* Zero Filling the Destination */
    memset(destinationArray, 0x00, 1024);
    isFinished = false;

    /* Configuring DMA module */
    MAP_DMA_enableModule();
    MAP_DMA_setControlBase(controlTable);

    /* Setting Control Indexes. In this case we will set the source of the
     * DMA transfer to our random data array and the destination to the
     * destination data array. Set as auto mode with no need to retrigger
     * after each arbitration */
    MAP_DMA_setChannelControl(UDMA_PRI_SELECT,
            UDMA_SIZE_8 | UDMA_SRC_INC_8 | UDMA_DST_INC_8 | UDMA_ARB_1024);
    MAP_DMA_setChannelTransfer(UDMA_PRI_SELECT, UDMA_MODE_AUTO, data_array,
            destinationArray, 1024);

    /* Assigning/Enabling Interrupts */
    MAP_DMA_assignInterrupt(DMA_INT1, 0);
    MAP_Interrupt_enableInterrupt(INT_DMA_INT1);
    MAP_Interrupt_disableSleepOnIsrExit();

    /* Enabling DMA Channel 0 */
    MAP_DMA_enableChannel(0);

    /* Forcing a software transfer on DMA Channel 0 */
    MAP_DMA_requestSoftwareTransfer(0);


    while(1)
    {
        MAP_PCM_gotoLPM0InterruptSafe();

        if(isFinished)
            while(1);
    }
}

/* Completion interrupt for DMA */
void DMA_INT1_IRQHandler(void)
{
    MAP_DMA_disableChannel(0);
    isFinished = true;
}
