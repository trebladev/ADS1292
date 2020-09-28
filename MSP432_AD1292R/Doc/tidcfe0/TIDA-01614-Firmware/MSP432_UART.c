/*
 * MSP432_UART.c
 *
 *  Created on: May 8, 2018
 *      Author: x0238818
 */


#include <stdint.h>
#include <stddef.h>

#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/cfg/global.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Semaphore.h>

#include <MSP432_UART_TX.h>

/* Example/Board Header files */
#include "Board.h"

UART_Handle uart;
UART_Params uartParams;

uint8_t return_uart[30];

//void readCallback(UART_Handle handle, void *buffer, size_t num)
//{
//}

void UARTWriteCallback(UART_Handle handle, void *buffer, size_t num)
{
}



void MSP_UART_initialise(void)
{
    MSP_EXP432P401R_initUART();

    /* Create a UART with data processing off. */
    UART_Params_init(&uartParams);
    uartParams.writeDataMode = UART_DATA_BINARY;
    uartParams.readDataMode = UART_DATA_BINARY;
    uartParams.readReturnMode = UART_RETURN_FULL;
    uartParams.readEcho = UART_ECHO_OFF;
    uartParams.baudRate = 460800;
    uartParams.writeMode = UART_MODE_CALLBACK;
    uartParams.writeCallback = UARTWriteCallback; // your callback function
//    uartParams.readMode = UART_MODE_CALLBACK;
    //uartParams.readTimeout = 10000;

    uart = UART_open(Board_UART1, &uartParams);

    if (uart == NULL)
    {
       System_abort("Error initializing UART\n");
    }
    else
    {
       System_printf("UART initialized\n");
    }

}

void MSP_UART_write(uint8_t *uart_send, uint8_t buffer_size)
{
    int i=0;
    i = UART_write(uart, uart_send, buffer_size);
}

void MSP_UART_read(uint8_t *uart_buffer, uint8_t buffer_size)
{
    UART_read(uart, uart_buffer, buffer_size);
}


