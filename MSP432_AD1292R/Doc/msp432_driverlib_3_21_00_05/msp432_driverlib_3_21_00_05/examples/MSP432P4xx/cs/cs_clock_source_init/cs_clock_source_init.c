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
 * MSP432 Clock System - Clock Source Initialization
 *
 * Description: In this code example, the CS_initClockSignal is used to
 * initialize every clock on the controller to a non-default value. The
 * CS_initClockSignal function is one of the most convenient CS functions as it
 * provides a readable/usable method for users to initialize specific clock
 * sources to a specific clock signal. Once each clock source is initialized,
 * the convenience functions that get clock frequencies are used to assign
 * the frequencies to variables. The user can pause the debugger to observe
 * that the correct frequencies have been assigned to the variables.
 *
 * MCLK = MODOSC/4 = 6MHz
 * ACLK = REFO/2 = 16kHz
 * HSMCLK = DCO/2 = 1.5Mhz
 * SMCLK = DCO/4 = 750kHz
 * BCLK  = REFO = 32kHz
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
 *            |                  |
 *
 * Author: Timothy Logan
 ******************************************************************************/
/* DriverLib Includes */
#include "driverlib.h"

/* Standard Includes */
#include <stdint.h>
/* Statics */
static volatile uint32_t aclk, mclk, smclk, hsmclk, bclk;

int main(void)
{
    /* Halting WDT */
    MAP_WDT_A_holdTimer();

    /* Initializing the clock source as follows:
     *      MCLK = MODOSC/4 = 6MHz
     *      ACLK = REFO/2 = 16kHz
     *      HSMCLK = DCO/2 = 1.5Mhz
     *      SMCLK = DCO/4 = 750kHz
     *      BCLK  = REFO = 32kHz
     */
    MAP_CS_initClockSignal(CS_MCLK, CS_MODOSC_SELECT, CS_CLOCK_DIVIDER_4);
    MAP_CS_initClockSignal(CS_ACLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_2);
    MAP_CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_2);
    MAP_CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_4);
    MAP_CS_initClockSignal(CS_BCLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_1);

    /*
     *  Getting all of the frequency values of the CLK sources using the
     * convenience functions */
    aclk = CS_getACLK();
    mclk = CS_getMCLK();
    smclk = CS_getSMCLK();
    hsmclk = CS_getHSMCLK();
    bclk = CS_getBCLK();

    /*
     * Staying in active mode so that the user can see the values that are put
     * in the above registers through the debugger
     */
    while (1)
    {

    }
}

