/*
 * AFE4403.h
 *
 *  Created on: Apr 30, 2018
 *      Author: x0238818
 */

#ifndef AFE4403_H_
#define AFE4403_H_

#include <xdc/std.h>

//Main Task
void AFE_main_task(void);

// This is to enable the SPI_READ bit in AFE. This should be done before reading any data.
void AFE4403_enable_read(void);

// This is to disable the SPI_READ bit in AFE. This should be done after reading any data.
void AFE4403_disable_read(void);

//Function to write to register. Takes in address and data to be written as arguments.
void AFE4403_reg_write(uint8_t reg_address, uint32_t data);

//Function to read the register. Takes in the address of the register to be read as arguments.
int32_t AFE4403_reg_read(uint8_t reg_address);

//Wirte the AFE default register configs (all timing related register).
void AFE4403_write_register_configs(void);

//ADC RDY signal goes low, so we can read the data
void AFE_ADC_RDY_goes_low(void);

void AFE_CS_high(void);

void AFE_CS_low(void);

#endif /* AFE4403_H_ */
