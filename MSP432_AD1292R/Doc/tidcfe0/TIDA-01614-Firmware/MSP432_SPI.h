/*
 * MSP432_SPI.h
 *
 *  Created on: Apr 30, 2018
 *      Author: x0238818
 */

#ifndef MSP432_SPI_H_
#define MSP432_SPI_H_

#include <board.h>

#include <xdc/std.h>


void MSP_SPI_initialise(void);
void MSP_SPI_close(void);
void MSP_AFE_SPI_write(uint8_t reg_address, uint32_t data);
void MSP_AFE_SPI_read(uint8_t reg_address, uint32_t* rx_buffer);
void Set_SPI_mode(uint8_t mode);
uint16_t get_SPI_mode();

void MSP_ADS_SPI_write_register(uint8_t reg_address, uint8_t data);
void MSP_ADS_SPI_read_register(uint8_t reg_address, uint8_t* rx_buffer);
void MSP_ADS_SPI_write_command(uint8_t command);
void MSP_ADS_SPI_read_ecg_resp_data(uint32_t* status, uint32_t* channel_1, uint32_t* channel_2);

#endif /* MSP432_SPI_H_ */
