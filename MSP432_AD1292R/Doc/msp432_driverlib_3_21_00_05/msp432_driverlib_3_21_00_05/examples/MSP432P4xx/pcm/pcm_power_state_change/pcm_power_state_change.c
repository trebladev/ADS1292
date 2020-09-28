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
 * MSP432 Power Control Module Demo - Switches between available power states
 *
 * Description: This code examples demonstrates the various power modes/states
 * available on the MSP432 platform. The program will start up and wait for the
 * user to press the switch located on P1.1. Once this button is pressed, an
 * interrupt is triggered and a power state change is queued using the
 * PCM_setPowerState DriverLib API. Before the power state is changed, an LED
 * is blinked on P1.0 to signal the state transition. Each press of the switch
 * will toggle a new power mode in the following order:
 *
 *           - \b PCM_AM_LDO_VCORE0,      [Active Mode, LDO, VCORE0]
 *           - \b PCM_AM_LDO_VCORE1,      [Active Mode, LDO, VCORE1]
 *           - \b PCM_AM_DCDC_VCORE0,     [Active Mode, DCDC, VCORE0]
 *           - \b PCM_AM_DCDC_VCORE1,     [Active Mode, DCDC, VCORE1]
 *           - \b PCM_AM_LF_VCORE0,       [Active Mode, Low Frequency, VCORE0]
 *           - \b PCM_AM_LF_VCORE1,       [Active Mode, Low Frequency, VCORE1]
 *           - \b PCM_LPM0_LDO_VCORE0,    [LMP0, LDO, VCORE0]
 *           - \b PCM_LPM0_LDO_VCORE1,    [LMP0, LDO, VCORE1]
 *           - \b PCM_LPM0_DCDC_VCORE0,   [LMP0, DCDC, VCORE0]
 *           - \b PCM_LPM0_DCDC_VCORE1,   [LMP0, DCDC, VCORE1]
 *           - \b PCM_LPM0_LF_VCORE0,     [LMP0, Low Frequency, VCORE0]
 *           - \b PCM_LPM0_LF_VCORE1,     [LMP0, Low Frequency, VCORE1]
 *           - \b PCM_LPM3,               [LPM3]
 *
 * Once LPM3 is entered, the next transition will start again with
 *  PCM_AM_LDO_VCORE0.
 *
 *                MSP432P401
 *             ------------------
 *         /|\|                  |
 *          | |                  |
 *          --|RST         P1.1  |<--Toggle Switch
 *            |                  |
 *            |            P1.0  |----> LED (green)
 *            |                  |
 *            |                  |
 *            |                  |
 *
 * Author: Timothy Logan
 *******************************************************************************/
/* DriverLib Include */
#include "driverlib.h"

/* Standard Includes */
#include <stdint.h>

#include <stdbool.h>


/* Application Data */
volatile uint32_t curPowerState, ledBlinkCount;
volatile bool stateChange;

/* Timer_A UpMode Configuration Parameter */
const Timer_A_UpModeConfig upConfig =
{
        TIMER_A_CLOCKSOURCE_ACLK,               // ACLK Clock SOurce
        TIMER_A_CLOCKSOURCE_DIVIDER_1,          // ACLK/1
        16000,                                  // 16000 tick period
        TIMER_A_TAIE_INTERRUPT_DISABLE,         // Disable Timer interrupt
        TIMER_A_CCIE_CCR0_INTERRUPT_ENABLE ,    // Enable CCR0 interrupt
        TIMER_A_SKIP_CLEAR                      // Clear value
};

/* List of power states to toggle through */
#define NUMBER_OF_POWER_STATES    13
const uint32_t powerStates[NUMBER_OF_POWER_STATES] =
{ PCM_AM_LDO_VCORE0, PCM_AM_LDO_VCORE1, PCM_AM_DCDC_VCORE0, PCM_AM_DCDC_VCORE1, PCM_AM_LF_VCORE0,
        PCM_AM_LF_VCORE1, PCM_LPM0_LDO_VCORE0, PCM_LPM0_LDO_VCORE1, PCM_LPM0_DCDC_VCORE0, PCM_LPM0_DCDC_VCORE1,
        PCM_LPM0_LF_VCORE0, PCM_LPM0_LF_VCORE1, PCM_LPM3 };

void TerminateGPIO(void);

int main(void)
{
    /* Halting the Watchdog */
    MAP_WDT_A_holdTimer();

    /* Initializing Variables */
    curPowerState = MAP_PCM_getPowerState();
    stateChange = false;
    ledBlinkCount = 0;

    /* Setting the Reference Oscillator to 128KHz. For Low Frequency modes, the
     * MCLK frequency is required to be scaled back to 128KHz.
     */
    MAP_CS_setReferenceOscillatorFrequency(CS_REFO_128KHZ);

    /* Setting up Timer_A to be sourced from ACLK and for ACLK to be sourced from
     * the 128Khz REFO. Since the frequency of MCLK will be changed when we go
     * into LF mode, we want to make our LED blink look consistent.
     */
    MAP_CS_initClockSignal(CS_ACLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_Timer_A_configureUpMode(TIMER_A0_BASE, &upConfig);
    MAP_Timer_A_enableCaptureCompareInterrupt(TIMER_A0_BASE,
            TIMER_A_CAPTURECOMPARE_REGISTER_0);

    /* Setting P1.0 as LED Output and P1.1 as input switch */
    MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1);
    MAP_GPIO_enableInterrupt(GPIO_PORT_P1, GPIO_PIN1);
    MAP_GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN0);
    MAP_Interrupt_enableInterrupt(INT_PORT1);
    MAP_Interrupt_enableMaster();

    MAP_Interrupt_disableSleepOnIsrExit();
    MAP_SysCtl_enableSRAMBankRetention(SYSCTL_SRAM_BANK1);

    MAP_Interrupt_enableMaster();
    while (1)
    {
        /* If we have a state change request... */
        if (stateChange)
        {
            MAP_Interrupt_disableMaster();

            stateChange = false;

            /* If we are going to switch our power state into a Low Frequency
             * Mode, we have to scale back our MCLK frequency to 128KHz.
             */
            if (powerStates[curPowerState] == PCM_AM_LF_VCORE0
                    || powerStates[curPowerState] == PCM_AM_LF_VCORE1
                    || powerStates[curPowerState] == PCM_LPM0_LF_VCORE0
                    || powerStates[curPowerState] == PCM_LPM0_LF_VCORE1)
            {
                MAP_CS_initClockSignal(CS_MCLK, CS_REFOCLK_SELECT,
                        CS_CLOCK_DIVIDER_1);
            } else
            {
                MAP_CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT,
                        CS_CLOCK_DIVIDER_1);
            }
            /* Re-enabling port pin interrupt */
            MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1);
            MAP_Interrupt_enableInterrupt(INT_PORT1);
            MAP_Interrupt_enableMaster();

            /* Change to new power state */
            MAP_PCM_setPowerState(powerStates[curPowerState]);
        }
    }
}

/*
 * Port 6 interrupt handler. This handler is called whenever the switch attached
 * to P6.7 is pressed. A status flag is set to signal for the main application
 * to change power states
 */
void PORT1_IRQHandler(void)
{
    uint32_t status = MAP_GPIO_getEnabledInterruptStatus(GPIO_PORT_P1);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, status);


    if (status & GPIO_PIN1)
    {
        MAP_Interrupt_disableInterrupt(INT_PORT1);

        if (powerStates[curPowerState] == PCM_LPM3)
        {
            curPowerState = 0;

        }
        else
        {
            curPowerState++;
        }

        ledBlinkCount = 0;
        MAP_Interrupt_enableInterrupt(INT_TA0_0);
        MAP_Timer_A_startCounter(TIMER_A0_BASE,TIMER_A_UP_MODE);

    }
}
/* Flashes LED */
 void TA0_0_IRQHandler(void)
{
    MAP_Timer_A_clearCaptureCompareInterrupt(TIMER_A0_BASE,
            TIMER_A_CAPTURECOMPARE_REGISTER_0);

    MAP_GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);

    ledBlinkCount++;

     if(ledBlinkCount == 6)
     {
         stateChange = true;
         MAP_Timer_A_stopTimer(TIMER_A0_BASE);
         MAP_Interrupt_disableInterrupt(INT_TA0_0);
     }
}
