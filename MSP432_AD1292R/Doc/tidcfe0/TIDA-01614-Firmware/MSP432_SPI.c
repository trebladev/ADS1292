/*
 * MSP432_SPI.c
 *
 *  Created on: Apr 30, 2018
 *      Author: x0238818
 */

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

/* TI-RTOS Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/SPI.h>
#include <ADS1292R.h>
#include <AFE4403.h>

#include <driverlib.h>
#include <Project_Defines.h>

/* Example/Board Header files */
#include "Board.h"

/* Allocate buffers in .dma section of memory for concerto devices */
#ifdef MWARE
#pragma DATA_SECTION(masterRxBuffer, ".dma");
#pragma DATA_SECTION(masterTxBuffer, ".dma");
#endif

uint8_t masterRxBuffer[10];
uint8_t masterTxBuffer[10];

uint32_t data;

SPI_Handle masterSpi;
SPI_Transaction masterTransaction;
UInt transferOK;

void MSP_SPI_initialise()
{

    SPI_Params spiParams;
    SPI_Params_init(&spiParams);
    spiParams.transferMode  = SPI_MODE_BLOCKING;
    spiParams.dataSize      = 8;

    spiParams.frameFormat   = SPI_POL0_PHA1;
    spiParams.bitRate       = 2000000;//1000000;

    /* Initialize SPI handle as default master */
#if EVM_BOARD
    masterSpi = SPI_open(Board_SPI1, &spiParams);
#endif

#if TIDA_BOARD
    masterSpi = SPI_open(Board_SPI0, &spiParams);
#endif

    if (masterSpi == NULL)
    {
       System_abort("Error initializing SPI\n");
    }
    else
    {
       //System_printf("SPI initialized\n");
    }

   /* Initialize master SPI transaction structure */
    masterTransaction.count = 4;
    masterTransaction.txBuf = (Ptr)masterTxBuffer;
    masterTransaction.rxBuf = (Ptr)masterRxBuffer;

#if AFE_ENABLE

    #if EVM_BOARD
    //AFE_CS
    GPIO_setAsOutputPin(GPIO_PORT_P4, GPIO_PIN1);
    GPIO_setOutputHighOnPin(GPIO_PORT_P4, GPIO_PIN1);
    #endif

    #if TIDA_BOARD
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN4);
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN4);
    #endif

#endif

}

void MSP_SPI_close()
{
    SPI_close(masterSpi);
}

uint8_t currentSPIMode = SPI_MODE_ADS1292R;

void Set_SPI_mode(uint8_t mode)
{
    EUSCI_A0->CTLW0 |= UCSWRST; //disable SPI
    currentSPIMode = mode;

    if( mode == SPI_MODE_AFE4403 ){
        EUSCI_A0->CTLW0 |= UCCKPH; //Phase 0
//        EUSCI_A0->BRW = 12; //1M SPI clk for 32 MHz sys Clk
          EUSCI_A0->BRW = 6; //2M SPI clk for 32 MHz sys Clk
    }else if(mode == SPI_MODE_ADS1292R ){
        EUSCI_A0->CTLW0 &= ~UCCKPH; //Phase 1
        EUSCI_A0->BRW = 30; //400k SPI clk for 32 MHz sys Clk
//      EUSCI_A0->BRW = 60; //200k SPI clk for 32 MHz sys Clk
    }

    EUSCI_A0->CTLW0 &= ~UCSWRST; //enable
}

uint16_t get_SPI_mode()
{
    return currentSPIMode;
}

//AFE SPI

void MSP_AFE_SPI_write(uint8_t reg_address, uint32_t data)
{
    masterTransaction.count = 4;

    int send_data = 0;

    send_data = ((reg_address << 24) | data);

    masterTxBuffer[0] = ((send_data & 0xFF000000) >> 24);
    masterTxBuffer[1] = ((send_data & 0x00FF0000) >> 16);
    masterTxBuffer[2] = ((send_data & 0x0000FF00) >> 8);
    masterTxBuffer[3] = (send_data & 0x000000FF);


    AFE_CS_low();

    /* Initiate SPI transfer */
    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    AFE_CS_high();

    if(transferOK)
    {
//        System_printf("Master: %s\n", masterRxBuffer);
    }
    else
    {
        System_printf("Unsuccessful master SPI transfer");
    }

}

void MSP_AFE_SPI_read(uint8_t reg_address, uint32_t* rx_buffer)
{
    masterTransaction.count = 4;

    int send_data = 0;

    send_data = (reg_address << 24);

    masterTxBuffer[0] = ((send_data & 0xFF000000) >> 24);
    masterTxBuffer[1] = ((send_data & 0x00FF0000) >> 16);
    masterTxBuffer[2] = ((send_data & 0x0000FF00) >> 8);
    masterTxBuffer[3] = (send_data & 0x000000FF);

    AFE_CS_low();

    /* Initiate SPI transfer */
    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    AFE_CS_high();

    if(transferOK)
    {
       /* Print contents of master receive buffer */
       //System_printf("Master read: %s\n", masterRxBuffer);
       *rx_buffer = ((0x00 << 24) | (masterRxBuffer[1] << 16) | (masterRxBuffer[2] << 8) | (masterRxBuffer[3])) ;

    }
    else
    {
       System_printf("Unsuccessful master SPI read");
       *rx_buffer = 0;
    }

}


//ADS SPI

void MSP_ADS_SPI_write_register(uint8_t reg_address, uint8_t data)
{
    int i=0;

    masterTransaction.count = 3;

    masterTxBuffer[0] = (WREG | reg_address);
    masterTxBuffer[1] = 0x00;
    masterTxBuffer[2] = (data);

    ADS_CS_low();

    for(i=0;i<50;i++);

    transferOK = SPI_transfer(masterSpi, &masterTransaction);
/*
    for(i=0;i<50;i++);

    masterTxBuffer[0] = (WREG | reg_address);

    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    for(i=0;i<500;i++);

    masterTxBuffer[0] = 0x00;

    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    for(i=0;i<500;i++);

    masterTxBuffer[0] = data;

    transferOK = SPI_transfer(masterSpi, &masterTransaction);
*/
    for(i=0;i<200;i++);

    ADS_CS_high();

    for(i=0;i<200;i++);

    if(transferOK)
    {
        //System_printf("Master: %s\n", masterTxBuffer);
    }
    else
    {
        System_printf("Unsuccessful master SPI transfer");
    }

}

void MSP_ADS_SPI_read_register(uint8_t reg_address, uint8_t* rx_buffer)
{
    int i=0;

    masterTransaction.count = 3;

    masterTxBuffer[0] = (RREG | reg_address);
    masterTxBuffer[1] = 0x00;
    masterTxBuffer[2] = 0x00;

    ADS_CS_low();

    for(i=0;i<50;i++);

    transferOK = SPI_transfer(masterSpi, &masterTransaction);
/*
    masterTxBuffer[0] = (RREG | reg_address);

    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    for(i=0;i<500;i++);

    masterTxBuffer[0] = 0x00;

    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    for(i=0;i<500;i++);

    masterTxBuffer[0] = 0x00;

    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    for(i=0;i<1000;i++);
*/
    for(i=0;i<200;i++);

    ADS_CS_high();

    for(i=0;i<200;i++);

    if(transferOK)
    {
       //Print contents of master receive buffer
       //System_printf("Master read: %s\n", masterRxBuffer);
       *rx_buffer = masterRxBuffer[2];
    }
    else
    {
       System_printf("Unsuccessful master SPI read");
       *rx_buffer = 0;
    }

}

void MSP_ADS_SPI_write_command(uint8_t command)
{

    int i=0;

    masterTransaction.count = 1;

    masterTxBuffer[0] = (command);

    ADS_CS_low();

    for(i=0;i<500;i++);

    //Initiate SPI transfer
    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    for(i=0;i<200;i++);

    ADS_CS_high();

    for(i=0;i<200;i++);

    if(transferOK)
    {
        //System_printf("Master: %s\n", masterTxBuffer);
    }
    else
    {
        System_printf("Unsuccessful master SPI transfer");
    }

}

void MSP_ADS_SPI_read_ecg_resp_data(uint32_t* status, uint32_t* channel_1, uint32_t* channel_2)
{

    int i=0;

    masterTransaction.count = 9;

    masterTxBuffer[0] = 0x00;
    masterTxBuffer[1] = 0x00;
    masterTxBuffer[2] = 0x00;
    masterTxBuffer[3] = 0x00;
    masterTxBuffer[4] = 0x00;
    masterTxBuffer[5] = 0x00;
    masterTxBuffer[6] = 0x00;
    masterTxBuffer[7] = 0x00;
    masterTxBuffer[8] = 0x00;

    ADS_CS_low();

    for(i=0;i<25;i++);

    //Initiate SPI transfer
    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    for(i=0;i<30;i++);

    ADS_CS_high();

    for(i=0;i<30;i++);

    if(transferOK)
    {
       /* Print contents of master receive buffer */
       //System_printf("Master read: %s\n", masterRxBuffer);
       *status    = ((0x00 << 24) | (masterRxBuffer[0] << 16) | (masterRxBuffer[1] << 8) | (masterRxBuffer[2]));
       *channel_1 = ((0x00 << 24) | (masterRxBuffer[3] << 16) | (masterRxBuffer[4] << 8) | (masterRxBuffer[5]));
       *channel_2 = ((0x00 << 24) | (masterRxBuffer[6] << 16) | (masterRxBuffer[7] << 8) | (masterRxBuffer[8]));

    }
    else
    {
       System_printf("Unsuccessful master SPI read");
       *status = 0;
       *channel_1 = 0;
       *channel_2 = 0;
    }

}

/*
void MSP_ADS_SPI_read_ecg_resp_data(uint32_t* status, uint32_t* channel_1, uint32_t* channel_2)
{

    int i=0;

    masterTransaction.count = 10;

    masterTxBuffer[0] = RDATA;
    masterTxBuffer[1] = 0x00;
    masterTxBuffer[2] = 0x00;
    masterTxBuffer[3] = 0x00;
    masterTxBuffer[4] = 0x00;
    masterTxBuffer[5] = 0x00;
    masterTxBuffer[6] = 0x00;
    masterTxBuffer[7] = 0x00;
    masterTxBuffer[8] = 0x00;
    masterTxBuffer[9] = 0x00;

    ADS_CS_low();

    for(i=0;i<50;i++);

    //Initiate SPI transfer
    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    for(i=0;i<100;i++);

    ADS_CS_high();

    for(i=0;i<100;i++);

    if(transferOK)
    {
       //Print contents of master receive buffer
       //System_printf("Master read: %s\n", masterRxBuffer);
       *status    = ((0x00 << 24) | (masterRxBuffer[1] << 16) | (masterRxBuffer[2] << 8) | (masterRxBuffer[3]));
       *channel_1 = ((0x00 << 24) | (masterRxBuffer[4] << 16) | (masterRxBuffer[5] << 8) | (masterRxBuffer[6]));
       *channel_2 = ((0x00 << 24) | (masterRxBuffer[7] << 16) | (masterRxBuffer[8] << 8) | (masterRxBuffer[9]));

    }
    else
    {
       System_printf("Unsuccessful master SPI read");
       *status = 0;
       *channel_1 = 0;
       *channel_2 = 0;
    }

}

*/
