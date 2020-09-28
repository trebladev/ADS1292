/*
 * MSP432_GPIO.h
 *
 *  Created on: May 11, 2018
 *      Author: x0238818
 */

#ifndef MSP432_GPIO_H_
#define MSP432_GPIO_H_

#include <board.h>

#include <xdc/std.h>

void MSP_AFE_ADC_RDY_Config(void);
void MSP_ADS_DRDY_Config(void);
void MSP_pace_detect_config(void);
void MSP_patient_alarm_config(void);

void Patient_alarm_state_change(void);

#endif /* MSP432_GPIO_H_ */
