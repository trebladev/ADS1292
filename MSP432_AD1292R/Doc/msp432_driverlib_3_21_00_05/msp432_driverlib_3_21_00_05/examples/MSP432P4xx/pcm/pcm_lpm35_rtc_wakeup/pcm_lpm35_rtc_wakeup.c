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
 * MSP432 PCM - LPM3.5 with RTC Wake-Up
 *
 * Description: In this example, the use of LPM3.5 is shown with the
 * use of an RTC interrupt to "revive" the device. The RTC module is setup and
 * an alarm is set to fire an interrupt event one minute after the timer is
 * started. After the timer is started, the device is put into LPM3.5
 * by use of the PCM_shutdownDevice API. When the minute passes, an interrupt
 * is fired on the RTC which causes the device to reset. After the device is
 * reset, the IFG for the alarm is still pending ion the RTC controller. When
 * interrupts are enabled after the reset, this pending IFG will cause the
 * RTC ISR to fire and a flag is set. This flag will be caught by the main
 * execution of the program and an LED will be blinked indefinitely.
 *
 *                MSP432P401
 *             ------------------
 *         /|\|                  |
 *          | |                  |
 *          --|RST         P1.0  |---> P1.0 LED
 *            |                  |
 *            |                  |
 *            |                  |
 *            |                  |
 *
 * Author: Timothy Logan
 *******************************************************************************/
/* DriverLib Includes */
#include "driverlib.h"

/* Standard Includes */
#include <stdint.h>

#include <stdbool.h>

/* Calendar Structure for RTC */
static RTC_C_Calendar calendarTime;

/* Statics */
static volatile bool blinkLED;

int main(void)
{
    volatile uint32_t ii;

    /* Halting the Watchdog */
    WDT_A_holdTimer();

    /* Initializing calendar to 11/19/2013 (Tuesday) 10:10:00 (when this example
     * was made)
     */
    calendarTime.seconds = 0;
    calendarTime.minutes = 10;
    calendarTime.hours = 10;
    calendarTime.dayOfWeek = 2;
    calendarTime.dayOfmonth = 19;
    calendarTime.month = 11;
    calendarTime.year = 2013;
    blinkLED = false;

    /* Configuring LFXTOUT and LFXTIN for XTAL operation and P1.0 for LED */
    GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_PJ,
            GPIO_PIN0 | GPIO_PIN1, GPIO_PRIMARY_MODULE_FUNCTION);
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN0);

    /* Starting LFXT */
    CS_startLFXT(CS_LFXT_DRIVE3);

    /* Initializing RTC to 11/19/2013 10:10:00  (when this test was made) */
    RTC_C_initCalendar(&calendarTime, RTC_C_FORMAT_BINARY);

    /* Setting alarm for one minute later */
    RTC_C_setCalendarAlarm(11,10,2,19);

    /* Setting up interrupts for the RTC. Once we enable interrupts, if there
     * was a pending interrupt due to a wake-up from partial shutdown then the
     * ISR will immediately fire and blinkLED will be set to true.*/
    RTC_C_clearInterruptFlag(RTC_C_getInterruptStatus());
    RTC_C_enableInterrupt(RTC_C_CLOCK_ALARM_INTERRUPT);
    Interrupt_enableInterrupt(INT_RTC_C);
    Interrupt_enableMaster();

    /* If this flag has been set, it means that the device has already
     * been into shutdown mode before. In this case, we want to blink
     * an LED to signal the reset.
     */
    if (blinkLED)
    {
        while (1)
        {
            GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
            for(ii=0;ii<10000;ii++);
        }

    }

    /* Starting RTC and going into shutdown */
    RTC_C_startClock();
    PCM_shutdownDevice(PCM_LPM35_VCORE0);
}

/* RTC ISR */
void RTC_C_IRQHandler(void)
{
    uint32_t status;

    status = RTC_C_getEnabledInterruptStatus();
    RTC_C_clearInterruptFlag(status);

    /* Toggling the output on the LED */
    if(status & RTC_C_CLOCK_ALARM_INTERRUPT)
    {
        blinkLED = true;
    }

}

