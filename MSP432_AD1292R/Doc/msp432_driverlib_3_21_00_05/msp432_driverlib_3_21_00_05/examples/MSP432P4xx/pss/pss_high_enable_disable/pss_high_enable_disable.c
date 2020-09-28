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
 * MSP432 Power Supply System - Enable/Disable
 *
 * Description: This code example shows how to disable/enable the high side
 * monitor in the PSS module in MSP432 . Additionally, the power
 * consumption variations of having the monitor enabled/disabled is examined.
 * Initially, the high side monitor is disabled and then the
 * device is put into LPM3 (DSL). If the user wishes, they can hook a
 * multimeter to the power (Vcc) pin of the target board. Once the switch
 * connected to P1.1 is pressed, the high side monitor is enabled and the
 * device goes back to DSL. When this happens, the power consumption should be
 * relatively higher compared to when the high side was disabled.
 *
 *                  MSP432P401
 *             ------------------
 *         /|\|                  |
 *          | |                  |
 *          --|RST               |
 *            |                  |
 *            |                  |
 *            |                  |
 *            |            P1.1  |<--Toggle Switch
 *            |                  |
 *
 * Author: Timothy Logan
 ******************************************************************************/
/* DriverLib Includes */
#include "driverlib.h"

/* Standard Includes */
#include <stdint.h>

#include <stdbool.h>

void configurePorts(void);

int main(void)
{
    /* Disabling master interrupt and halting the WDT */
    MAP_WDT_A_holdTimer();

    /* Disabling the high side monitor/supervisor to squeeze
     * every ounce of power consumption out of the device
     */
    MAP_PSS_disableHighSide();

    /* Setting our MCLK to REFO 128Khz  and changing to low frequency mode */
    MAP_CS_setReferenceOscillatorFrequency(CS_REFO_128KHZ);
    MAP_CS_initClockSignal(CS_MCLK, CS_REFOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_PCM_setPowerMode(PCM_LF_MODE);

    /* Configure ports for ultra low power operation */
    configurePorts();

    /* Setting our GPIO ready for interrupt and enabling interrupts*/
    MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1);
    MAP_GPIO_enableInterrupt(GPIO_PORT_P1, GPIO_PIN1);
    MAP_Interrupt_enableInterrupt(INT_PORT1);
    MAP_Interrupt_enableMaster();

    /* LPM3ing to demonstrate low power current usage */
    while (1)
    {
        MAP_PCM_gotoLPM3();
    }
}

void configurePorts(void)
{
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P1, PIN_ALL8);
    MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P1, PIN_ALL8);
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, PIN_ALL8);
    MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P2, PIN_ALL8);
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P3, PIN_ALL8);
    MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P3, PIN_ALL8);
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P4, PIN_ALL8);
    MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P4, PIN_ALL8);
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P5, PIN_ALL8);
    MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P5, PIN_ALL8);
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P6, PIN_ALL8);
    MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P6, PIN_ALL8);
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P7, PIN_ALL8);
    MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P7, PIN_ALL8);
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P8, PIN_ALL8);
    MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P8, PIN_ALL8);
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P9, PIN_ALL8);
    MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P9, PIN_ALL8);
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P10, PIN_ALL8);
    MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P10, PIN_ALL8);
    MAP_PCM_enableRudeMode();
}

/* Port 1 ISR. In this ISR, the high side monitor for the PSS
 * module are enabled. The idea here is that the user has a multimeter hooked
 * up to the target board to measure the difference in power consumption when
 * they are enabled/disabled.
 */
void PORT1_IRQHandler(void)
{
    uint32_t status;

    status = MAP_GPIO_getEnabledInterruptStatus(GPIO_PORT_P1);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, status);

    if(status & GPIO_PIN1)
    {
        MAP_PSS_enableHighSide();
    }
}
