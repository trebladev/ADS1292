/*
 * MSP432_I2C.h
 *
 *  Created on: Jun 25, 2018
 *      Author: x0238818
 */

#ifndef MSP432_I2C_H_
#define MSP432_I2C_H_

void MSP_I2C_initialize(void);
void MSP_TMP_I2C_write(uint8_t slave_address, uint8_t reg_pointer, uint16_t reg_value);
void MSP_TMP_I2C_read(uint8_t slave_address, uint8_t reg_pointer, uint16_t * i2c_rx_buffer);
void MSP_TMP_I2C_set_temp_read_address(uint8_t slave_address);

void MSP_DAC_I2C_write(uint8_t slave_address, uint8_t reg_pointer, uint8_t reg_value);
void MSP_DAC_I2C_read(uint8_t slave_address, uint8_t reg_pointer, uint8_t * rx_buffer);

void MSP_ADC_I2C_write(uint8_t slave_address, uint8_t reg_pointer, uint8_t reg_value);
void MSP_ADC_I2C_read_data(uint8_t slave_address, uint8_t * rx_buffer);
void MSP_ADC_I2C_read_reg(uint8_t slave_address, uint8_t reg_pointer, uint8_t * rx_buffer);

#endif /* MSP432_I2C_H_ */
