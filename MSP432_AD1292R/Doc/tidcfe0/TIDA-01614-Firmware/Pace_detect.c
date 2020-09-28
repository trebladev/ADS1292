/*
 * Pace_maker.c
 *
 *  Created on: Jun 27, 2018
 *      Author: x0238818
 */

#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/cfg/global.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Semaphore.h>

#include <AFE4403.h>
#include <MSP432_SPI.h>
#include <MSP432_I2C.h>
#include <MSP432_UART.h>
#include <MSP432_UART_TX.h>
#include <MSP432_GPIO.h>
#include <Project_Defines.h>
#include <ti/drivers/GPIO.h>
#include <driverlib.h>
#include <math.h>
#include <Pace_detect.h>

uint8_t DAC_Channel_voltage[6] = {CH_A_VOLTAGE,CH_B_VOLTAGE,CH_C_VOLTAGE,CH_D_VOLTAGE,CH_E_VOLTAGE,CH_F_VOLTAGE};
uint8_t DAC_Channel_write[6] = {CH_A_WRITE,CH_B_WRITE,CH_C_WRITE,CH_D_WRITE,CH_E_WRITE,CH_F_WRITE};

/************************************************* DAC ********************************************/

volatile uint16_t paceState = 0;
volatile uint16_t paceDetectState = 0;

void clock_pacedetectStart()
{
    //periodically triggered by RTOS clock functionality
    paceState = 1;
}

void clock_pacedetectEnd()
{
    //periodically triggered by RTOS clock functionality
    paceState = 0;
}

void Pacedetect_main_task(void)
{

    paceDetectDataStruct pd={0,0};

#if PACE_DETECT_EN

#if SYNCHRONIZE
    Semaphore_pend(SEM_PACE_MAKER_INIT, BIOS_WAIT_FOREVER);
#endif

    int i = 0,j;
    uint8_t DAC_channel_code = 0;
    int16_t

    pace_height = 0;
    pace_rise_time = 0;
    pace_width = 0;

    pace_detected = 0;


    for(i=0;i<NUM_OF_DAC_CHANNEL;i++)
    {
//        DAC_channel_code = ((DAC_Channel_voltage[i] * pow(2,8)) / DAC_VREF);
        DAC_channel_code = (DAC_Channel_voltage[i]);
        Pacedetect_DAC_reg_write(DAC_Channel_write[i], DAC_channel_code);

    }

    // Abhishek Part
    DAC_channel_code = (DAC_Channel_voltage[0]);
            Pacedetect_DAC_reg_write(DAC_Channel_write[0], DAC_channel_code);
// part end

    Pacedetect_ADC_reg_write( 0x1F, 0x01 ); //abort seq
    Pacedetect_ADC_reg_write( 0x24, 0x03 ); //config channel input
    Pacedetect_ADC_reg_write( 0x1C, 0x04 ); //operation mode - manual with auto seq
    Pacedetect_ADC_reg_write( 0x20, 0x03 ); //enable both channel


#if SYNCHRONIZE
    Semaphore_post(SEM_PACE_MAKER_OK);
#endif
    pace_detected = 0;
#endif

    while(1)
    {
        if(paceState == 1)
        {
            ADS_disable_Respiration();
            Semaphore_pend(SEM_PACE_DETECT_GOES_HIGH, BIOS_NO_WAIT);
            paceDetectState=0;
            while(paceState == 1)
            {
                Semaphore_pend(SEM_PACE_DETECT_GOES_HIGH, 20); //wait for upto 2000 ms

                if( paceDetectState == 1)
                {
//                    Pacedetect_ADC_reg_write( 0x1E, 0x01 ); //start seq
//                    pd = Pacedetect_ADC_reg_read_data();
//                    Pacedetect_ADC_reg_write( 0x1F, 0x01 ); //abort seq
                    pace_detected = 1;
                }
                paceDetectState=0;
            }
            ADS_enable_Respiration();
            pace_detected = 0;
        }
       Task_sleep(1000);
    }

}

void Pacedetect_DAC_reg_write(uint8_t reg_pointer, uint8_t reg_value)
{
    MSP_DAC_I2C_write(PD_DAC_SLAVE, reg_pointer, reg_value);
}

uint8_t Pacedetect_DAC_reg_read(uint8_t reg_pointer)
{
    uint8_t i2c_data;
    uint8_t ret_i2c_data;

    MSP_DAC_I2C_read(PD_DAC_SLAVE, reg_pointer, &i2c_data);
    ret_i2c_data = i2c_data;

    return ret_i2c_data;
}

void Pacedetect_ADC_reg_write(uint8_t reg_pointer, uint8_t reg_value)
{
    MSP_ADC_I2C_write(PD_ADC_SLAVE, reg_pointer, reg_value);
}

paceDetectDataStruct Pacedetect_ADC_reg_read_data()
{
    uint8_t i2c_data[4];
    paceDetectDataStruct pd={0,0};

    MSP_ADC_I2C_read_data(PD_ADC_SLAVE, i2c_data);
    pd.riseTime = (uint16_t)i2c_data[0]<<4 | i2c_data[1]>>4;
    pd.duration = (uint16_t)i2c_data[2]<<4 | i2c_data[3]>>4;

    return pd;
}

uint8_t Pacedetect_ADC_reg_read(uint8_t reg_pointer)
{
    uint8_t i2c_data;
    uint8_t ret_i2c_data;

    MSP_ADC_I2C_read_reg(PD_ADC_SLAVE, reg_pointer, &i2c_data);
    ret_i2c_data = i2c_data;

    return ret_i2c_data;
}


void Pace_detect_goes_high(void)
{

#if PACE_DETECT_EN
    Semaphore_post(SEM_PACE_DETECT_GOES_HIGH);
    paceDetectState=1;
#endif

}


void Pace_reset_high(void)
{
    GPIO_setOutputHighOnPin(GPIO_PORT_P5, GPIO_PIN0);
}


void Pace_reset_low(void)
{
    GPIO_setOutputLowOnPin(GPIO_PORT_P5, GPIO_PIN0);
}
