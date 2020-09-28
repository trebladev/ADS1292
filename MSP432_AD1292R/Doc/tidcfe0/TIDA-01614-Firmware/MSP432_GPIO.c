/*
 * MSP432_GPIO.c
 *
 *  Created on: May 11, 2018
 *      Author: x0238818
 */

#include <stdint.h>
#include <stddef.h>

#include <xdc/std.h>
#include <xdc/runtime/System.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/gpio/GPIOMSP432.h>
#include <ti/drivers/UART.h>

/* Example/Board Header files */
#include "Board.h"
#include <MSP432_GPIO.h>
#include <AFE4403.h>
#include <Project_Defines.h>
#include <ADS1292R.h>
#include <Pace_detect.h>

#include <driverlib.h>

void MSP_AFE_ADC_RDY_Config(void)
{
#if AFE_ENABLE
    //GPIO_setConfig(MSP_EXP432P401R_S1, GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING);

    /* install Button callback */
    GPIO_setCallback(AFE_ADC_RDY, AFE_ADC_RDY_goes_low);

    /* Enable interrupts */
    GPIO_enableInt(AFE_ADC_RDY);
#endif
}

void MSP_ADS_DRDY_Config(void)
{
#if ADS_ENABLE
    /* install Button callback */
    GPIO_setCallback(ADS_DRDY, ADS_DRDY_goes_low);

    /* Enable interrupts */
    GPIO_enableInt(ADS_DRDY);
#endif
}

void MSP_pace_detect_config(void)
{
#if PACE_DETECT_EN

    /* install Button callback */
    GPIO_setCallback(PACE_DETECT, Pace_detect_goes_high);

    /* Enable interrupts */
    GPIO_enableInt(PACE_DETECT);

#endif
}

void Patient_alarm_state_change(void)
{
#if ALARM_EN
    uint8_t pin_status;

    pin_status = GPIO_read(PATIENT_ALARM);

    if(pin_status == 1)
    {
        patient_alarmed = 0;
    }
    else
    {
        patient_alarmed = 1;
    }
#endif
}

void MSP_patient_alarm_config(void)
{
#if ALARM_EN
    /* install Button callback */
    GPIO_setCallback(PATIENT_ALARM, Patient_alarm_state_change);

    /* Enable interrupts */
    GPIO_enableInt(PATIENT_ALARM);
#endif
}

