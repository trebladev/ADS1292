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
 * MSP432 Flash Controller - Mass Erase
 *
 * Description: This example shows the functionality of the mass erase API in
 * DriverLib. At the start of the example, flash bank 1 sectors 30 and 31 are
 * unprotected (0x3E000 - 0x3FFFF) and then programmed with filler data. Sector
 * 31 is then protected and a mass erase is performed. Since the mass erase
 * will only erase unprotected sectors, after the mass erase finishes only
 * the data in sector 30 will be erased (as can be observed through the memory
 * browser in the debugger).
 *
 *                MSP432P401
 *             ------------------
 *         /|\|                  |
 *          | |                  |
 *          --|RST               |
 *            |                  |
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

#include <stdbool.h>
#include <string.h>

#define BANK1_S30 0x3E000

/* Statics */
uint8_t patternArray[8192];

int main(void)
{
    /* Since this program has a huge buffer that simulates the calibration data,
     * halting the watch dog is done in the reset ISR to avoid a watchdog 
     * timeout during the zero 
     */

    /* Setting our MCLK to 48MHz for faster programming */
    MAP_PCM_setCoreVoltageLevel(PCM_VCORE1);
    FlashCtl_setWaitState(FLASH_BANK0, 2);
    FlashCtl_setWaitState(FLASH_BANK1, 2);
    MAP_CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_48);

    /* Initializing our buffer to a pattern of 0xA5 */
    memset(patternArray, 0xA5, 8192);
    
    /* Unprotecting User Bank 1, Sectors 30 and 31  */
    MAP_FlashCtl_unprotectSector(FLASH_MAIN_MEMORY_SPACE_BANK1,
            FLASH_SECTOR30 | FLASH_SECTOR31);

    /* Trying a mass erase. Since we unprotected User Bank 1,
     * sectors 31 and 32, this should erase these sectors. If it fails, we
     * trap inside an infinite loop.
     */
    if(!MAP_FlashCtl_performMassErase())
        while(1);
    
    /* Trying to program the filler data. If it fails, trap inside an infinite
       loop */
    if(!MAP_FlashCtl_programMemory (patternArray, (void*) BANK1_S30, 8192))
        while(1);

    /* Setting  sector 31 back to protected  */
    MAP_FlashCtl_protectSector(FLASH_MAIN_MEMORY_SPACE_BANK1,FLASH_SECTOR31);

    /* Performing the mass erase again. Now, since we protected Sector31, only
     * Sector 30 (0x3E000 - 0x3EFFF) should be erased. Set a breakpoint
     * after this call to observe the memory in the debugger.
     */
    if(!MAP_FlashCtl_performMassErase())
        while(1);

    /* Deep Sleeping when not in use */
    while (1)
    {
        MAP_PCM_gotoLPM3();
    }
}
