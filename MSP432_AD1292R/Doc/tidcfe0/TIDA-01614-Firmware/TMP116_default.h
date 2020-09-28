/*
 * TMP116_default.h
 *
 *  Created on: Jun 26, 2018
 *      Author: x0238818
 */

#ifndef TMP116_DEFAULT_H_
#define TMP116_DEFAULT_H_

#define TMP_REG_CONFIG 1

#if TMP_REG_CONFIG
uint16_t const TMP_REG[][2] =
{

 {0x00,0x73},  //ID
 {0x01,0x02},  //CONFIG1
 {0x02,0xE0},  //CONFIG2
 {0x03,0xF0},  //LOFF
 {0x04,0x00},  //CH1SET
 {0x05,0x00},  //CH2SET
 {0x06,0x2C},  //RLD_SENS
 {0x07,0x0F},  //LOFF_SENS
 {0x08,0x00},  //LOFF_STAT
 {0x09,0xEA},  //RESP1
 {0x0A,0x03},  //RESP2

 {0xFF,0xFF}   //End of Array

};

#endif

#endif /* TMP116_DEFAULT_H_ */
