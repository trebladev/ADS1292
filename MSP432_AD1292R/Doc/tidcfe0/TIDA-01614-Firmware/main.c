/*
 * Copyright (c) 2015, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
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
 */

/*
 *  ======== spiloopback.c ========
 */
/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/cfg/global.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Semaphore.h>


/* TI-RTOS Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/SPI.h>

#include <driverlib.h>

/* Example/Board Header files */
#include "Board.h"
#include <AFE4403.h>
#include <MSP432_SPI.h>
#include <MSP432_UART.h>
#include <MSP432_UART_TX.h>
#include <MSP432_GPIO.h>
#include <MSP432_I2C.h>
#include <ADS1292R.h>
#include <Project_Defines.h>

#define SPI_MSG_LENGTH    32

void task_test(void);

void GUI_init_task(void);

int main(void)
{
    int i = 0;

    /* Call board init functions. */
    Board_initGeneral();
    Board_initGPIO();


#if AFE_ENABLE | ADS_ENABLE
    MSP_EXP432P401R_initSPI();
#endif

#if TEMP_MODULE_EN | PACE_DETECT_EN
    MSP_I2C_initialize();
#endif

    MSP_UART_initialise();

#if TIDA_BOARD

//  CS_setDCOFrequency(32000000); //For AFE
//    CS_setDCOFrequency(48000000);

//    CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
//    CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
//    CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_2);
//
//    CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_4);
//
    GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_P4,GPIO_PIN4,GPIO_PRIMARY_MODULE_FUNCTION);//For AFE

#endif

    /* Start BIOS */
    BIOS_start();

    return (0);
}

void GUI_init_task(void)
{
    Semaphore_pend(SEM_GUI_INITIALISE, BIOS_WAIT_FOREVER);

    uint8_t GUI_data = 0;

#if WAIT_FOR_GUI
    while(GUI_data != "A")
    {
#endif
//        UART_packet_format_and_send(CONFIG_DATA);

#if WAIT_FOR_GUI
        MSP_UART_read(&GUI_data, 1);
    }
#endif

    Semaphore_post(SEM_INTERRUPT_INIT);

}



