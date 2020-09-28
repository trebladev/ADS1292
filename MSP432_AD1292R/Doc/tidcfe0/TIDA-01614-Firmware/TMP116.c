/*
 * TMP116.c
 *
 *  Created on: Jun 26, 2018
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
#include <TMP116_default.h>
#include <MSP432_SPI.h>
#include <MSP432_I2C.h>
#include <MSP432_UART.h>
#include <MSP432_UART_TX.h>
#include <MSP432_GPIO.h>
#include <Project_Defines.h>
#include <TMP116.h>

#include <ti/drivers/GPIO.h>
#include <driverlib.h>
#include <math.h>


void TMP_main_task(void)
{

#if SYNCHRONIZE
    Semaphore_pend(SEM_TMP_INITIALISE, BIOS_WAIT_FOREVER);
#endif

    while(1)
    {
        Semaphore_pend(SEM_TMP_TASK, BIOS_WAIT_FOREVER);

        //Write the Config reg for all the TEMP
#if TMP_SLAVE_0_EN
        TMP_reg_write(TMP_SLAVE_0, 0x01, 0x0C00);
#endif

#if TMP_SLAVE_1_EN
        TMP_reg_write(TMP_SLAVE_1, 0x01, 0x0c00);
#endif

#if TMP_SLAVE_2_EN
        TMP_reg_write(TMP_SLAVE_2, 0x01, 0x0c00);
#endif

#if TMP_SLAVE_3_EN
        TMP_reg_write(TMP_SLAVE_3, 0x01, 0x0c00);
#endif
        //Single conversion takes - 20ms (min time)
        Task_sleep(20);

//Read the Temp reg for all the TEMP
#if TMP_SLAVE_0_EN
        Tmp_1 = TMP_reg_read_temp(TMP_SLAVE_0);
#endif

#if TMP_SLAVE_1_EN
        Tmp_2 = TMP_reg_read_temp(TMP_SLAVE_1);
#endif

#if TMP_SLAVE_2_EN
        Tmp_3 = TMP_reg_read_temp(TMP_SLAVE_2);
#endif

#if TMP_SLAVE_3_EN
        Tmp_3 = TMP_reg_read_temp(TMP_SLAVE_3);
#endif

        UART_packet_format_and_send(PACE_TMP_DATA);

    }

}

void CLOCK_TMP_read_temperature(void)
{
#if TEMP_MODULE_EN
    Semaphore_post(SEM_TMP_TASK);
#endif
}

void TMP_reg_write(uint8_t slave_address, uint8_t reg_pointer, uint16_t reg_value)
{
    MSP_TMP_I2C_write(slave_address, reg_pointer, reg_value);
}

uint16_t TMP_reg_read_temp(uint8_t slave_address)
{
    uint16_t i2c_data;
    uint16_t ret_i2c_data;

    MSP_TMP_I2C_read(slave_address, 0, &i2c_data);
    ret_i2c_data = i2c_data;

    return ret_i2c_data;
}

//void TMP_reg_config(uint8_t slave_address)
//{
//
//    int i=1;
//
//    while(TMP_REG[i][0] != 0xFF)
//    {
//         TMP_reg_write(slave_address, TMP_REG[i][0], TMP_REG[i][1]);
//         i++;
//    }
//
//}

