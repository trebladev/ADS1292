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
 * MSP432 DMA - AES256 ECB Encryption/Decryption
 *
 * Description: In this code example, the DMA module is used to encrypt and
 * decrypt of block of data using the AES256 module. The ECB (electronic code
 * book) method of encryption/decryption is used in this example. A block of
 * 128-bits of data is fed into the AES256's DIN module by the use of the
 * MSP432's DMA module. While the data is being encrypted, the device is put
 * into LPM0 for power conservation. When the data encryption has finished,
 * the DMA and AES256 modules are reconfigured for decryption and the process
 * is repeated. At the end of the code, a no operation is inserted so that the
 * user can set a breakpoint and observe that the decrypted data is the same
 * as the original plaintext data.
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

/* DriverLib Include */
#include "driverlib.h"

/* Standard Includes */
#include <stdint.h>
#include <string.h>

/* Static Variables */
static bool isFinished;

/* DMA Control Table */
#ifdef ewarm
#pragma data_alignment=1024
#else
#pragma DATA_ALIGN(controlTable, 1024)
#endif
uint8_t controlTable[256];

/* AES Data and Cipher Key */
static uint8_t Data[16] =
{ 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC,
        0xDD, 0xEE, 0xFF };
static uint8_t CipherKey[32] =
{ 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c,
        0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18,
        0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f };
static uint8_t DataAESencrypted[16];       // Encrypted data
static uint8_t DataAESdecrypted[16];       // Decrypted data

int main(void)
{
    /* Halting WDT  */
    MAP_WDT_A_holdTimer();
    MAP_Interrupt_disableMaster();

    /* Initializing the variables */
    isFinished = false;

    /* Restting the module, enabling AES DMA triggers, and setting to
     * encrypt mode (ECB) */
    AES256->CTL0 = (AES256->CTL0 & ~(AESCM_3 | AESOP_3)) | AESCMEN;

    /* Load a cipher key to module */
    MAP_AES256_setCipherKey(AES256_BASE, CipherKey, AES256_KEYLENGTH_256BIT);

    /* Configuring DMA module */
    MAP_DMA_enableModule();
    MAP_DMA_setControlBase(controlTable);

    /*
     * Primary DMA Channel, AES256
     * Size = 16 bits
     * Source Increment = None
     * Destination Increment = 16bits
     * Arbitration = 1 , no other sources
     */
    MAP_DMA_setChannelControl(UDMA_PRI_SELECT | DMA_CH0_AESTRIGGER0,
            UDMA_SIZE_16 | UDMA_SRC_INC_NONE | UDMA_DST_INC_16 | UDMA_ARB_1);
    MAP_DMA_setChannelTransfer(UDMA_PRI_SELECT | DMA_CH0_AESTRIGGER0,
            UDMA_MODE_AUTO, (void*) &AES256->DOUT, DataAESencrypted, 8);

    /*
     * Primary DMA Channel, AES256
     * Size = 16 bits
     * Source Increment = 16 bits
     * Destination Increment = None
     * Arbitration = 1 , no other sources
     */
    MAP_DMA_setChannelControl(UDMA_PRI_SELECT | DMA_CH1_AESTRIGGER1,
    UDMA_SIZE_16 | UDMA_SRC_INC_16 | UDMA_DST_INC_NONE | UDMA_ARB_1);
    MAP_DMA_setChannelTransfer(UDMA_PRI_SELECT | DMA_CH1_AESTRIGGER1,
    UDMA_MODE_AUTO, (void*) Data, (void*) &AES256->DIN, 8);

    /* Assigning/Enabling Interrupts */
    MAP_DMA_assignInterrupt(DMA_INT1, 0);
    MAP_Interrupt_enableInterrupt(INT_DMA_INT1);
    MAP_DMA_assignChannel(DMA_CH0_AESTRIGGER0);
    MAP_DMA_assignChannel(DMA_CH1_AESTRIGGER1);
    MAP_DMA_clearInterruptFlag(0);
    MAP_DMA_clearInterruptFlag(1);
    MAP_Interrupt_enableMaster();

    /* Enabling the DMA channels. Channel 1 is used for transfering the
     * plaintext data to the DIN register and Channel 0 is used to transfer the
     * encrypted data to an intermediary register.
     */
    MAP_DMA_enableChannel(1);
    MAP_DMA_enableChannel(0);

    /* Setting the number of 128-bit blocks to encrypt. Setting the CTL1
     * register will initiate the DMA transfer. Once all of the encryption
     * is completed, the DMA completion interrupt will be fired. */
    AES256->CTL1 = 1;

    /* Waiting for the DMA finished flag */
    while (!isFinished)
    {
        MAP_PCM_gotoLPM0InterruptSafe();
    }

    /* Resetting the AES module */
    isFinished = false;

    /* Load a decipher key to module and resetting the module for decryption */
    AES256->CTL0 &= ~AESCMEN;
    MAP_AES256_setDecipherKey(AES256_BASE, CipherKey, AES256_KEYLENGTH_256BIT);
    AES256->CTL0 |= (AESCMEN | AESOP_3);
    AES256->STAT |= AESKEYWR;

    /*
     * Primary DMA Channel, AES256
     * Size = 16 bits
     * Source Increment = None
     * Destination Increment = 16bits
     * Arbitration = 1 , no other sources
     */
    MAP_DMA_setChannelControl(UDMA_PRI_SELECT | DMA_CH0_AESTRIGGER0,
            UDMA_SIZE_16 | UDMA_SRC_INC_NONE | UDMA_DST_INC_16 | UDMA_ARB_1);
    MAP_DMA_setChannelTransfer(UDMA_PRI_SELECT | DMA_CH0_AESTRIGGER0,
            UDMA_MODE_AUTO, (void*) &AES256->DOUT, (void*) DataAESdecrypted, 8);

    /*
     * Primary DMA Channel, AES256
     * Size = 16 bits
     * Source Increment = 16 bits
     * Destination Increment = None
     * Arbitration = 1 , no other sources
     */
    MAP_DMA_setChannelControl(UDMA_PRI_SELECT | DMA_CH1_AESTRIGGER1,
            UDMA_SIZE_16 | UDMA_SRC_INC_16 | UDMA_DST_INC_NONE | UDMA_ARB_1);
    MAP_DMA_setChannelTransfer(UDMA_PRI_SELECT | DMA_CH1_AESTRIGGER1,
            UDMA_MODE_AUTO, (void*) DataAESencrypted, (void*) &AES256->DIN, 8);

    /* Enabling the DMA channels. Channel 1 is used for transfering the
     * encrypted data to the DIN register and Channel 0 is used to transfer the
     * decrypted data to the decrypted data register */
    MAP_DMA_enableChannel(1);
    MAP_DMA_enableChannel(0);

    /* Setting the number of 128-bit blocks to decrypt. Setting the CTL1
     * register will initiate the DMA transfer. Once all of the decryption
     * is completed, the DMA completion interrupt will be fired. */
    AES256->CTL1 = 1;

    while (!isFinished)
    {
        MAP_PCM_gotoLPM0InterruptSafe();
    }

    /* Set a breakpoint here. The data in DataAESdecrypted should math the
     * original data in Data.
     */
    __no_operation();
}

/* Completion interrupt for DMA */
void DMA_INT1_IRQHandler(void)
{
    MAP_DMA_disableChannel(0);
    MAP_DMA_disableChannel(1);
    isFinished = true;
}

