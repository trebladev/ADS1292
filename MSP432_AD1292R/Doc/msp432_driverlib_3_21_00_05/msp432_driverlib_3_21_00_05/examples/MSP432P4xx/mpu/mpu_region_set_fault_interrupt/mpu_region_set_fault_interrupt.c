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
 * MSP432 MPU - Region Set with Fault Interrupt
 *
 * Description: In this code example, the ARM MPU module is setup and configured
 * using DriverLib APIs. A 32B region of SRAM memory is defined as read only to
 * both privileged modes and user modes. The region is enabled and a GPIO
 * input interrupt is setup to the switched connected to P1.1. The device is
 * put into LPM3 and waits for a GPIO interrupt to happen. When the GPIO
 * interrupt occurs, the CPU wakes up and a flash program is attempted on the
 * protected memory. This immediately causes an MPU fault to occur and an
 * interrupt is fired. In the interrupt handler, the LED on P1.0 is set high
 * and the CPU is halted by a perpetual while loop.
 *
 *                MSP432P401
 *             ------------------
 *         /|\|                  |
 *          | |                  |
 *          --|RST         P1.0  |---> P1.0 LED
 *            |                  |
 *            |            P1.1  |<--Toggle Switch
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

/* Memory region that we will protect  */
uint8_t memoryRegion[32];

/* MPU Configuration flag set - 32B region with read only for both privileged
 * and user accesses
 */
const uint32_t flagSet = MPU_RGN_SIZE_32B | MPU_RGN_PERM_EXEC
        | MPU_RGN_PERM_PRV_RO_USR_RO | MPU_SUB_RGN_DISABLE_7 | MPU_RGN_ENABLE;

int main(void)
{
    volatile uint32_t curValue;

    /* Holding the Watchdog  and enabling master interrupts */
    WDT_A_holdTimer();
    Interrupt_enableMaster();

    /* Configuring P1.0 as output and P1.1 (switch) as input */
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);

    /* Configuring P1.1 as an input and enabling interrupts */
    MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1);
    GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1);
    GPIO_enableInterrupt(GPIO_PORT_P1, GPIO_PIN1);
    Interrupt_enableInterrupt(INT_PORT1);
    
    /* Setting and enabling the region - This will cause 0x3E000 - 0x3F000 to
     * read only
     */
    MPU_setRegion(0,  (uint32_t)memoryRegion, flagSet);
    
    Interrupt_enableInterrupt(FAULT_MPU);

    MPU_enableModule(MPU_CONFIG_PRIV_DEFAULT);
    
    while(1)
    {
        /* Going to LPM3 and waiting for a GPIO interrupt */
        PCM_gotoLPM3();

        /* Trying to program the sector that we protected - This will cause
         * the MPU to fault and interrupt
         */
        memoryRegion[0] = 0xA5;
    }
}

/* GPIO ISR to wake up the CPU */
void PORT1_IRQHandler(void)
{
    GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1);
}

/* MPU Fault ISR */
void MemManage_Handler(void)
{
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);
    while(1);
}


