/*
 * ADS1292_default.h
 *
 *  Created on: May 25, 2018
 *      Author: x0238818
 */

#ifndef ADS1292_DEFAULT_H_
#define ADS1292_DEFAULT_H_

#define ADS_REG_CONFIG

#ifdef ADS_REG_CONFIG
uint8_t const ADS_REG[][2] =
{

 {0x00,0x73},  //ID
 {0x01,0x02},  //CONFIG1 //500 SPS
 //{0x01,0x03},  //CONFIG1 //1k SPS
// {0x01,0x04},  //CONFIG1 //2k SPS
// {0x01,0x05},  //CONFIG1 //4k SPS
 {0x02,0xE8},  //CONFIG2
 {0x03,0xF0},  //LOFF
 {0x04,0x00},  //CH1SET
 {0x05,0x00},  //CH2SET
 {0x06,0xAC},  //RLD_SENS
 {0x07,0x0F},  //LOFF_SENS
 {0x08,0x00},  //LOFF_STAT
 {0x09,0xEA},  //RESP1
 {0x0A,0x07},  //RESP2

 {0xFF,0xFF}   //End of Array

};

#endif

#endif /* ADS1292_DEFAULT_H_ */
