/*
 * TMP116.h
 *
 *  Created on: Jun 26, 2018
 *      Author: x0238818
 */

#ifndef TMP116_H_
#define TMP116_H_

#define TMP_SLAVE_0  0x48
#define TMP_SLAVE_1  0x49
#define TMP_SLAVE_2  0x4A
#define TMP_SLAVE_3  0x4B

#define TMP_SLAVE_0_EN  1
#define TMP_SLAVE_1_EN  1
#define TMP_SLAVE_2_EN  1
#define TMP_SLAVE_3_EN  0

void TMP_reg_write(uint8_t slave_address, uint8_t reg_pointer, uint16_t reg_value);
uint16_t TMP_reg_read_temp(uint8_t slave_address);
//void TMP_reg_config(uint8_t slave_address);

void TMP_main_task(void);
void CLOCK_TMP_read_temperature(void);

#endif /* TMP116_H_ */
