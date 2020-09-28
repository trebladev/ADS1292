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
 * MSP432 WDT - Servicing the Dog 
 *
 * Description: In this example, the WDT module is used in a typical use case 
 * that illustrates how the watchdog can initiate a reset if the system becomes 
 * unresponsive. The watchdog timer is setup to initiate a soft reset if it 
 * hasn't been serviced in 4 seconds. A simple SysTick is also setup to make it 
 * so that the watchdog is serviced every second. When the GPIO button connected 
 * to P1.1 is pressed, the SysTick  interrupt will be disabled causing the 
 * watchdog to timeout. Upon reset, the program will detect that the watchdog 
 * timeout triggered a soft reset and  blink the LED on P1.0 to signify the 
 * watchdog timeout.
 *
 *                MSP432P401
 *             ------------------
 *         /|\|                  |
 *          | |                  |
 *          --|RST         P1.1  |<--- Switch
 *            |                  |
 *            |                  |
 *            |            P1.0  |---> LED
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

#define WDT_A_TIMEOUT RESET_SRC_1

int main(void)
{
    volatile uint32_t ii;
    
    /* Halting the Watchdog (while we set it up) */
    MAP_WDT_A_holdTimer();

    /* If the watchdog just reset us, we want to toggle a GPIO to illustrate
        that the watchdog timed out. Period of LED is 1s */
    if(MAP_ResetCtl_getSoftResetSource() & WDT_A_TIMEOUT)
    {
        MAP_GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);

        while(1)
        {
            MAP_GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
            for(ii=0;ii<4000;ii++)
            {
                
            }

        }
    }

    /* Setting MCLK to REFO at 128Khz for LF mode and SMCLK to REFO */
    MAP_CS_setReferenceOscillatorFrequency(CS_REFO_128KHZ);
    MAP_CS_initClockSignal(CS_MCLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_HSMCLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal(CS_SMCLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_PCM_setPowerState(PCM_AM_LF_VCORE0);

    /* Configuring P1.1 as an input for button press */
    MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1);

    /* Configuring WDT to timeout after 512k iterations of SMCLK, at 128k,
     * this will roughly equal 4 seconds*/
    MAP_SysCtl_setWDTTimeoutResetType(SYSCTL_SOFT_RESET);
    MAP_WDT_A_initWatchdogTimer(WDT_A_CLOCKSOURCE_SMCLK,
                                    WDT_A_CLOCKITERATIONS_512K);
    

    /* Setting our SysTick to wake up every 128000 clock iterations to service
     * the dog.
     */
    MAP_SysTick_enableModule();
    MAP_SysTick_setPeriod(128000);
    MAP_SysTick_enableInterrupt();

    /* Enabling interrupts and starting the watchdog timer*/
    MAP_GPIO_enableInterrupt(GPIO_PORT_P1, GPIO_PIN1);
    MAP_Interrupt_enableInterrupt(INT_PORT1);
    MAP_Interrupt_enableMaster();

    MAP_WDT_A_startTimer();

    /* Sleeping when not active */
    while (1)
    {
        MAP_PCM_gotoLPM0();
        MAP_WDT_A_clearTimer();
    }
}

/* SysTick ISR - This ISR will fire every 1s. Having this ISR fire will wake
    up the device from LPM0 and the WDT_A will be serviced in the main loop */
void SysTick_Handler(void)
{
    return;
}

/* GPIO ISR for button press - When a button is pressed */
void PORT1_IRQHandler(void)
{
    uint32_t status;

    status = MAP_GPIO_getEnabledInterruptStatus(GPIO_PORT_P1);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, status);

    if(status & GPIO_PIN1)
    {
        MAP_SysTick_disableInterrupt();
    }
}
