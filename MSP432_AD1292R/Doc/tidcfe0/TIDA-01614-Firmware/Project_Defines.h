/*
 * Project_Defines.h
 *
 *  Created on: Jun 5, 2018
 *      Author: x0238818
 */

#ifndef PROJECT_DEFINES_H_
#define PROJECT_DEFINES_H_

#define AFE_ENABLE 1
#define ADS_ENABLE 1 //Enabling both AFE_ENABLE and ADS_ENABLE enables sync between AFE & ADS

#define EVM_BOARD  0
#define TIDA_BOARD 1

#define SYNCHRONIZE 1   // Enable this for the complete sync of AFE,ADS,TMP,Pace detect.

#define TEMP_MODULE_EN  1 //If testing in EVM make sure that the ADS and AFE are not enabled, since I2C and SPI uses the same Base module.
#define PACE_DETECT_EN  1
#define ALARM_EN        0

#define WAIT_FOR_GUI    0

#define SAMP_500_SPS  0x1F4 //500sps

#define SPI_MODE_AFE4403    0
#define SPI_MODE_ADS1292R   1

int32_t Led_1, Led_1_amb, Led_2, Led_2_amb, ecg, resp, motion, leadoff_detect;
uint16_t Tmp_1,Tmp_2,Tmp_3;
uint16_t pace_height,pace_width,pace_rise_time,pace_detected,patient_alarmed;

uint8_t AFE_read_done_flag;
uint8_t ADS_read_done_flag;

#endif /* PROJECT_DEFINES_H_ */
