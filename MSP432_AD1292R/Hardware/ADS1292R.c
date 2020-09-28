/*
 * ADS1292R.c
 *
 *  Created on: May 20, 2018
 *      Author: x0238818
 */

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/cfg/global.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Semaphore.h>

#include <ti/drivers/GPIO.h>
#include <ADS1292R.h>
#include <ADS1292_default.h>
#include <MSP432_SPI.h>
#include <MSP432_UART.h>
#include <MSP432_UART_TX.h>
#include <MSP432_GPIO.h>
#include <Project_Defines.h>

#include <driverlib.h>
#include <math.h>

int DELAY_COUNT=3;

#define DEBUG_BUFFER_LENGTH 7000

//int32_t channel_1[1000];
int32_t channel_2[DEBUG_BUFFER_LENGTH];
//uint32_t status[1000];

uint8_t ADS_REG_READ[12];

int32_t read_data[3];
uint32_t p2_24=0;
volatile uint16_t respiration_valid = 1; //respiration data is valid only if 1;

void ADS_main_task(void)
{

    p2_24 =   pow(2,24);

    int i=0;
    int j=0;
    int k=0;

#if ADS_ENABLE

    #if EVM_BOARD
    //AFE_CS
    GPIO_setAsOutputPin(GPIO_PORT_P4, GPIO_PIN1);
    GPIO_setOutputHighOnPin(GPIO_PORT_P4, GPIO_PIN1);
    #endif

    #if TIDA_BOARD
    //AFE CS
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN4);
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN4);
    #endif

    ADS_enable_Respiration();

    #if TIDA_BOARD && AFE_ENABLE && ADS_ENABLE
    Semaphore_pend(SEM_ADS_INITIALIZE, BIOS_WAIT_FOREVER);
    #endif


    ADS_PowerOn_Init();

    int delay=0;

    ADS_enable_start();

    for ( delay =0; delay < 10000; delay++);
    for ( delay =0; delay < 10000; delay++);
    for ( delay =0; delay < 10000; delay++);

    Start_Read_Data_Continuous();

    for ( delay =0; delay < 10000; delay++);
    for ( delay =0; delay < 10000; delay++);
    for ( delay =0; delay < 10000; delay++);


#endif

#if SYNCHRONIZE

    Semaphore_post(SEM_GUI_INITIALISE);
    Semaphore_pend(SEM_INTERRUPT_INIT, BIOS_WAIT_FOREVER);

    #if TEMP_MODULE_EN
    Semaphore_post(SEM_TMP_INITIALISE);
    #endif

    #if PACE_DETECT_EN
    Semaphore_post(SEM_PACE_MAKER_INIT);
    Semaphore_pend(SEM_PACE_MAKER_OK, BIOS_WAIT_FOREVER);
    #endif

#endif

#if AFE_ENABLE
    MSP_AFE_ADC_RDY_Config();
#endif

#if ADS_ENABLE
    MSP_ADS_DRDY_Config();
#endif

#if PACE_DETECT_EN
    MSP_pace_detect_config();
#endif

#if ALARM_EN
    MSP_patient_alarm_config();
#endif
    patient_alarmed = 0;
    ADS_read_done_flag = 1;

    while(1)
    {

#if ADS_ENABLE

    #if TIDA_BOARD && AFE_ENABLE && ADS_ENABLE
//        Semaphore_pend(SEM_AFE_READ_COMPLETE, BIOS_WAIT_FOREVER);

    #endif

#endif
        Semaphore_pend(SEM_ADS_DRDY_GOES_LOW, BIOS_WAIT_FOREVER);// wait for new semaphore
#if ADS_ENABLE

            Set_SPI_mode(SPI_MODE_ADS1292R);

            int32_t * status_channel_data;
            uint32_t lead_status = 0;

            status_channel_data = ADS_read_ecg_resp_data();
//            if( respiration_valid ){ //update resp only if its valid. (not during pace detection time). Cannot send 0 due to filter
//                ADS_register_write(0x09, 0xEA); //set RESP_MOD_EN
//            }else{
//                ADS_register_write(0x09, 0xAA); //unset RESP_MOD_EN
//            }

//            status[i] = *(status_channel_data);
//            channel_1[i] = *(status_channel_data + 1);
            channel_2[i] = *(status_channel_data + 2);
            i++;

            lead_status = *(status_channel_data);
            lead_status = ((lead_status & 0x000F8000) >> 15);

            leadoff_detect = lead_status;
            if( respiration_valid ){ //update resp only if its valid. (not during pace detection time). Cannot send 0 due to filter
                resp = *(status_channel_data + 1);
//                ADS_register_write(0x09, 0xEA); //set RESP_MOD_EN
            }else{
//                ADS_register_write(0x09, 0xAA); //unset RESP_MOD_EN
            }
            ecg = *(status_channel_data + 2);

            if(i>=DEBUG_BUFFER_LENGTH)
            {
                i=0;
            }

            Semaphore_pend(SEM_AFE_RDY_GOES_LOW, BIOS_WAIT_FOREVER);

            Set_SPI_mode(SPI_MODE_AFE4403);

           int32_t read_value, read_value_1, read_value_2, read_value_3;

           read_value = AFE4403_reg_read(0x2A);
           read_value_1 = AFE4403_reg_read(0x2B);
           read_value_2 = AFE4403_reg_read(0x2C);
           read_value_3 = AFE4403_reg_read(0x2D); //0x2D
           Led_2 = read_value;Led_2 = read_value;
           Led_1 = read_value_2;
           Led_2_amb = read_value_1;
           Led_1_amb = read_value_3;
           Led_1 = read_value_2;
           Led_2_amb = read_value_1;
           Led_1_amb = read_value_3;


            ADS_read_done_flag = 1;
            UART_packet_format_and_send(AFE_ADS_DATA);
//            Task_yield();
#endif
    }
}

void ADS_register_write(uint8_t reg_address, uint8_t data)
{
    MSP_ADS_SPI_write_register(reg_address,data);
}

unsigned int ADS_register_read(uint8_t reg_address)
{
    uint8_t data=0;
    uint8_t return_value = 0;

    MSP_ADS_SPI_read_register(reg_address, &data);
    return_value = data;

    return return_value;
}

void ADS_write_register_configs(void)
{
    int i=1;

    while(ADS_REG[i][0] != 0xFF)
    {
        ADS_register_write(ADS_REG[i][0], ADS_REG[i][1]);
        i++;
    }
}

void ADS_write_command(uint8_t command)
{
    MSP_ADS_SPI_write_command(command);
}

int32_t * ADS_read_ecg_resp_data(void)
{
    int i=0;

    uint32_t data, data_1, data_2;

    MSP_ADS_SPI_read_ecg_resp_data(&data, &data_1, &data_2);

    read_data[0] = data;
    read_data[1] = data_1;
    read_data[2] = data_2;

    for(i=1;i<3;i++)
    {
       read_data[i] &= 0x00FFFFFF;
       if (read_data[i] >= p2_24/2 /*(2^23)*/ )
       {
           read_data[i] -= p2_24;
       }
    }

    return read_data;
}

void ADS_PowerOn_Init(void)
{

   Set_SPI_mode(SPI_MODE_ADS1292R);

   volatile unsigned short Init_i, j;
   ADS_init_resources();

   ADS_reset();

   ADS_clock_selection(1);

    for (j = 0; j < DELAY_COUNT; j++)
    {
        for ( Init_i =0; Init_i < 20000; Init_i++);
        for ( Init_i =0; Init_i < 20000; Init_i++);
        for ( Init_i =0; Init_i < 20000; Init_i++);
    }

   for ( Init_i =0; Init_i < 20000; Init_i++);
   for ( Init_i =0; Init_i < 20000; Init_i++);
   for ( Init_i =0; Init_i < 20000; Init_i++);

   ADS_disable_start();
   ADS_enable_start();

   ADS_hard_stop();

   ADS_start_conv_command();

   ADS_soft_stop();

   for (j = 0; j < DELAY_COUNT; j++)
    {
        for ( Init_i =0; Init_i < 20000; Init_i++);
    }
   ADS_stop_read_continuous();                 // SDATAC command
    for (j = 0; j < DELAY_COUNT; j++)
    {
       for ( Init_i =0; Init_i < 35000; Init_i++);
    }
    for (j = 0; j < DELAY_COUNT; j++)
    {
       for ( Init_i =0; Init_i < 35000; Init_i++);
    }

    ADS_write_register_configs();

    int reg = 0;

    for(reg=0;reg<12;reg++)
    {
        ADS_REG_READ[reg] = ADS_register_read(reg);
    }

}

void ADS_init_resources(void)
{
    ADS_config_GPIO(); // Initializes ADS1x9x's input control lines
}

void ADS_config_GPIO(void)
{

#if EVM_BOARD
    GPIO_setAsOutputPin(GPIO_PORT_P5, GPIO_PIN6);    //Reset
    GPIO_setOutputLowOnPin(GPIO_PORT_P5, GPIO_PIN6);

    GPIO_setAsOutputPin(GPIO_PORT_P5, GPIO_PIN7);    //start
    GPIO_setOutputLowOnPin(GPIO_PORT_P5, GPIO_PIN7);
#endif

#if TIDA_BOARD
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN7);    //Reset
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN7);

    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN5);    //start
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN5);

    GPIO_setAsOutputPin(GPIO_PORT_P5, GPIO_PIN5);    //CLK_SEL
    GPIO_setOutputLowOnPin(GPIO_PORT_P5, GPIO_PIN5);
/*
    GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN1);    //GPIO1
    GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN1);

    GPIO_setAsOutputPin(GPIO_PORT_P7, GPIO_PIN1);    //GPIO2
    GPIO_setOutputLowOnPin(GPIO_PORT_P7, GPIO_PIN1);
    */
#endif

}

void ADS_reset_high(void)
{
#if EVM_BOARD
    GPIO_setOutputHighOnPin(GPIO_PORT_P5, GPIO_PIN6);
#endif

#if TIDA_BOARD
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN7);
#endif
}

void ADS_reset_low(void)
{
#if EVM_BOARD
    GPIO_setOutputLowOnPin(GPIO_PORT_P5, GPIO_PIN6);
#endif

#if TIDA_BOARD
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN7);
#endif
}

void ADS_start_high(void)
{
#if EVM_BOARD
    GPIO_setOutputHighOnPin(GPIO_PORT_P5, GPIO_PIN7);
#endif

#if TIDA_BOARD
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN5);
#endif
}

void ADS_start_low(void)
{
#if EVM_BOARD
    GPIO_setOutputLowOnPin(GPIO_PORT_P5, GPIO_PIN7);
#endif

#if TIDA_BOARD
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN5);
#endif
}

void ADS_reset(void)
{
    unsigned short i;

    ADS_reset_high();     // Set High
    /* Provide sufficient delay*/
    for(i= 0;   i < 50000; i++);    // Wait 1 mSec

    ADS_reset_low();    // Set to low
    for(i= 0;   i < 50000; i++);    // Wait 1 mSec

    ADS_reset_high();     // Set High
    for(i= 0;   i < 35000; i++);
}

void ADS_disable_start(void)
{
    unsigned short i;
    ADS_start_low();              // Set to LOW
    for(i=0; i<35000; i++);       // Small Delay to settle
}


void ADS_enable_start(void)
{
    unsigned short i;
    ADS_start_high();            // Set to High
    for(i=0; i<50000; i++);      // Small Delay to settle
}


void ADS_soft_stop(void)
{
    ADS_write_command(STOP);                   // Send 0x0A to the ADS1x9x
}


void ADS_hard_stop(void)
{
    unsigned short i, j;
    ADS_start_low();                           // Set Start pin to Low

    for (j = 0; j < DELAY_COUNT; j++)
    {
        for ( i=0; i < 35000; i++);
    }
}

void ADS_start_conv_command(void)
{
    ADS_write_command(START);                   // Send 0x08 to the ADS1x9x
}

void ADS_stop_read_continuous (void)
{
    ADS_write_command(SDATAC);                   // Send 0x11 to the ADS1x9x
}

void Start_Read_Data_Continuous (void)
{
    ADS_write_command(RDATAC);                  // Send 0x10 to the ADS1x9x
}

void ADS_DRDY_goes_low(void)
{
#if ADS_ENABLE
    Semaphore_post(SEM_ADS_DRDY_GOES_LOW);
#endif
}

void ADS_CS_low(void)
{

#if EVM_BOARD
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN6);
#endif

#if TIDA_BOARD
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN0);
#endif

}

void ADS_CS_high(void)
{
#if EVM_BOARD
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN6);
#endif

#if TIDA_BOARD
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);
#endif

}

void ADS_clock_selection(uint8_t selection)
{
    if(selection == 1)
    {
        GPIO_setOutputHighOnPin(GPIO_PORT_P5, GPIO_PIN5);
    }
    else
    {
        GPIO_setOutputLowOnPin(GPIO_PORT_P5, GPIO_PIN5);
    }
}

void ADS_enable_Respiration()
{
//    uint8_t mode = get_SPI_mode();
//    Set_SPI_mode(SPI_MODE_ADS1292R);
//
//    ADS_register_write(0x09, 0xEA); //set RESP_MOD_EN
//    ADS_register_write(0x0A, 0x03); //set RESP_MOD_EN
//
//    Set_SPI_mode(mode);
    respiration_valid = 1;
    GPIO_setOutputLowOnPin(GPIO_PORT_P5, GPIO_PIN1);
}

void ADS_disable_Respiration()
{
//    uint8_t mode = get_SPI_mode();
//    Set_SPI_mode(SPI_MODE_ADS1292R);
//
//    ADS_register_write(0x09, 0x2A); //unset RESP_MOD_EN
//
//    Set_SPI_mode(mode);
    respiration_valid = 0;
    GPIO_setOutputHighOnPin(GPIO_PORT_P5, GPIO_PIN1);

}

