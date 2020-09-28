/*
 * MSP432_UART.h
 *
 *  Created on: May 8, 2018
 *      Author: x0238818
 */

#ifndef MSP432_UART_H_
#define MSP432_UART_H_

#include <board.h>

#include <xdc/std.h>


void MSP_UART_initialise(void);
void MSP_UART_write(uint8_t *uart_send,uint8_t buffer_size);
void MSP_UART_read(uint8_t *uart_buffer, uint8_t buffer_size);

#endif /* MSP432_UART_H_ */
