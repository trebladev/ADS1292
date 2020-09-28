/*
 * MSP432_I2C.c
 *
 *  Created on: Jun 25, 2018
 *      Author: x0238818
 */

#include <xdc/std.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

/* TI-RTOS Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/I2C.h>
#include <ADS1292R.h>
#include <AFE4403.h>
#include <MSP432_I2C.h>

#include <driverlib.h>
#include <Project_Defines.h>

/* Example/Board Header files */
#include "Board.h"

uint8_t         i2c_txBuffer[4];
uint8_t         i2c_rxBuffer[4];
I2C_Handle      i2c_handle;
I2C_Params      i2c_params;
I2C_Transaction i2c_transaction;

uint8_t i2c_transfer_status;


void MSP_I2C_initialize(void)
{
    MSP_EXP432P401R_initI2C();

//    i2c_params.bitRate = I2C_400kHz;

    I2C_Params_init(&i2c_params);

    i2c_handle = I2C_open(Board_I2C_TMP, &i2c_params);
    if (i2c_handle == NULL)
    {
        System_abort("Error Initializing I2C\n");
    }
    else
    {
        System_printf("I2C Initialized\n");
    }

}

/******************************************* TMP116 **********************************************************/

void MSP_TMP_I2C_write(uint8_t slave_address, uint8_t reg_pointer, uint16_t reg_value)
{

    i2c_txBuffer[0] = reg_pointer;
    i2c_txBuffer[1] = ((reg_value & 0xFF00) >> 8);
    i2c_txBuffer[2] = (reg_value & 0x00FF);

    i2c_transaction.slaveAddress = slave_address;
    i2c_transaction.writeBuf = i2c_txBuffer;
    i2c_transaction.writeCount = 3;
    i2c_transaction.readBuf = NULL;
    i2c_transaction.readCount = 0;

    i2c_transfer_status = I2C_transfer(i2c_handle, &i2c_transaction);

     if(i2c_transfer_status)
    {
//        System_printf("Successful I2C transfer\n");
    }
    else
    {
        System_printf("Unsuccessful I2C transfer");
    }

}
void MSP_TMP_I2C_set_temp_read_address(uint8_t slave_address){

    i2c_txBuffer[0] = 0; //register pointer (address)

   i2c_transaction.slaveAddress = slave_address;
   i2c_transaction.writeBuf = i2c_txBuffer;
   i2c_transaction.writeCount = 1;
   i2c_transaction.readBuf = NULL;
   i2c_transaction.readCount = 0;

   i2c_transfer_status = I2C_transfer(i2c_handle, &i2c_transaction);

   if(i2c_transfer_status)
   {
//        System_printf("Successful I2C transfer");
   }
   else
   {
       System_printf("Unsuccessful I2C transfer");
   }

}


void MSP_TMP_I2C_read(uint8_t slave_address, uint8_t reg_pointer, uint16_t *rx_buffer)
{
    i2c_txBuffer[0] = 0;

    i2c_transaction.slaveAddress = slave_address | 0;
    i2c_transaction.writeBuf = i2c_txBuffer;
    i2c_transaction.writeCount = 1;
    i2c_transaction.readBuf = i2c_rxBuffer;
    i2c_transaction.readCount = 2;


    i2c_transfer_status = I2C_transfer(i2c_handle, &i2c_transaction);

    if(i2c_transfer_status)
    {
//        System_printf("Successful I2C transfer");
        *rx_buffer = ((i2c_rxBuffer[0] << 8) | i2c_rxBuffer[1]);
    }
    else
    {
        System_printf("Unsuccessful I2C transfer");
        *rx_buffer = 0;
    }
}

/******************************************* DAC5588 **********************************************************/

void MSP_DAC_I2C_write(uint8_t slave_address, uint8_t reg_pointer, uint8_t reg_value)
{

    i2c_txBuffer[0] = reg_pointer;
    i2c_txBuffer[1] = reg_value;
    i2c_txBuffer[2] = 0x00;

    i2c_transaction.slaveAddress = slave_address;
    i2c_transaction.writeBuf = i2c_txBuffer;
    i2c_transaction.writeCount = 3;
    i2c_transaction.readBuf = NULL;
    i2c_transaction.readCount = 0;

    i2c_transfer_status = I2C_transfer(i2c_handle, &i2c_transaction);

    if(i2c_transfer_status)
    {
//        System_printf("Successful I2C transfer");
    }
    else
    {
        System_printf("Unsuccessful I2C transfer");
    }

}



void MSP_DAC_I2C_read(uint8_t slave_address, uint8_t reg_pointer, uint8_t * rx_buffer)
{

    i2c_txBuffer[0] = reg_pointer;

    i2c_transaction.slaveAddress = slave_address;
    i2c_transaction.writeBuf = i2c_txBuffer;
    i2c_transaction.writeCount = 1;
    i2c_transaction.readBuf = i2c_rxBuffer;
    i2c_transaction.readCount = 2;

    i2c_transfer_status = I2C_transfer(i2c_handle, &i2c_transaction);

    if(i2c_transfer_status)
    {
//        System_printf("Successful I2C transfer");
        *rx_buffer = i2c_rxBuffer[0];
    }
    else
    {
        System_printf("Unsuccessful I2C transfer");
        *rx_buffer = 0;
    }

}

void MSP_ADC_I2C_write(uint8_t slave_address, uint8_t reg_pointer, uint8_t reg_value)
{

    i2c_txBuffer[0] = 0x08; //single reg write
    i2c_txBuffer[1] = reg_pointer;
    i2c_txBuffer[2] = reg_value;

    i2c_transaction.slaveAddress = slave_address;
    i2c_transaction.writeBuf = i2c_txBuffer;
    i2c_transaction.writeCount = 3;
    i2c_transaction.readBuf = NULL;
    i2c_transaction.readCount = 0;

    i2c_transfer_status = I2C_transfer(i2c_handle, &i2c_transaction);

    if(i2c_transfer_status)
    {
//        System_printf("Successful I2C transfer");
    }
    else
    {
        System_printf("Unsuccessful I2C transfer");
    }

}

void MSP_ADC_I2C_read_data(uint8_t slave_address, uint8_t * rx_buffer)
{

    i2c_transaction.slaveAddress = slave_address;
    i2c_transaction.writeBuf = NULL;
    i2c_transaction.writeCount = 0;
    i2c_transaction.readBuf = i2c_rxBuffer;
    i2c_transaction.readCount = 4;

    i2c_transfer_status = I2C_transfer(i2c_handle, &i2c_transaction);

    if(i2c_transfer_status)
    {
//        System_printf("Successful I2C transfer");
        *rx_buffer = i2c_rxBuffer[0];
        *(rx_buffer+1) = i2c_rxBuffer[1];
        *(rx_buffer+2) = i2c_rxBuffer[2];
        *(rx_buffer+3) = i2c_rxBuffer[3];
    }
    else
    {
        System_printf("Unsuccessful I2C transfer");
        *rx_buffer = 0;
    }

}

void MSP_ADC_I2C_read_reg(uint8_t slave_address, uint8_t reg_pointer, uint8_t * rx_buffer)
{

    i2c_txBuffer[0] = 0x10;
    i2c_txBuffer[1] = reg_pointer;

    i2c_transaction.slaveAddress = slave_address;
    i2c_transaction.writeBuf = i2c_txBuffer;
    i2c_transaction.writeCount = 2;
    i2c_transaction.readBuf = i2c_rxBuffer;
    i2c_transaction.readCount = 1;

    i2c_transfer_status = I2C_transfer(i2c_handle, &i2c_transaction);

    if(i2c_transfer_status)
    {
//        System_printf("Successful I2C transfer");
        *rx_buffer = i2c_rxBuffer[0];
    }
    else
    {
        System_printf("Unsuccessful I2C transfer");
        *rx_buffer = 0;
    }

}
