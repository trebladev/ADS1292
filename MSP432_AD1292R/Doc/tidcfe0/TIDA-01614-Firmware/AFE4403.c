/*
 * AFE4403.c
 *
 *  Created on: Apr 30, 2018
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

#include <AFE4403.h>
#include <AFE4403_default.h>
#include <MSP432_SPI.h>
#include <MSP432_UART.h>
#include <MSP432_UART_TX.h>
#include <MSP432_GPIO.h>
#include <Project_Defines.h>

#include <ti/drivers/GPIO.h>
#include <driverlib.h>
#include <math.h>

//#define AFE_REG_CONFIG

//int32_t LED2VAL[1000];
//int32_t LED2VAL_AMB[1000];
//int32_t LED1VAL[1000];
//int32_t LED1VAL_AMB[1000];

uint32_t AFE_REG_READ[52];

uint32_t p2_22=0;

void AFE_main_task(void)
{
    
   p2_22 =   pow(2,22);
#if AFE_ENABLE || ADS_ENABLE
   MSP_SPI_initialise();
   Set_SPI_mode(SPI_MODE_AFE4403);
#endif

#if AFE_ENABLE

    Task_sleep(5000);

    //ADS CS
#if EVM_BOARD
    //ADS_CS
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN6);
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN6);
#endif

#if TIDA_BOARD
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);
#endif


#if TIDA_BOARD
    GPIO_setAsOutputPin(GPIO_PORT_P3,GPIO_PIN1);     //PWDZ
    GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);

    GPIO_setAsOutputPin(GPIO_PORT_P3,GPIO_PIN0);    //RST
    GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);

    //Power up procedure - PWDNZ
    GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
    Task_sleep(2);

    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN1);
    Task_sleep(10);

    GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN1);
    Task_sleep(200);

    //Power up procedure - RST
    GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);
    Task_sleep(2);

    GPIO_setOutputLowOnPin(GPIO_PORT_P3,GPIO_PIN0);
    Task_sleep(2);

    GPIO_setOutputHighOnPin(GPIO_PORT_P3,GPIO_PIN0);

    Task_sleep(1200);
#endif

#if EVM_BOARD
    GPIO_setAsOutputPin(GPIO_PORT_P6,GPIO_PIN1);     //PWDZ
    GPIO_setOutputHighOnPin(GPIO_PORT_P6,GPIO_PIN1);

    GPIO_setAsOutputPin(GPIO_PORT_P6,GPIO_PIN0);    //RST
    GPIO_setOutputHighOnPin(GPIO_PORT_P6,GPIO_PIN0);

    //Power up procedure - PWDNZ
    GPIO_setOutputHighOnPin(GPIO_PORT_P6,GPIO_PIN1);
    Task_sleep(200);

    GPIO_setOutputLowOnPin(GPIO_PORT_P6,GPIO_PIN1);
    Task_sleep(1000);

    GPIO_setOutputHighOnPin(GPIO_PORT_P6,GPIO_PIN1);
    Task_sleep(20000);

    //Power up procedure - RST
    GPIO_setOutputHighOnPin(GPIO_PORT_P6,GPIO_PIN0);
    Task_sleep(200);

    GPIO_setOutputLowOnPin(GPIO_PORT_P6,GPIO_PIN0);
    Task_sleep(200);

    GPIO_setOutputHighOnPin(GPIO_PORT_P6,GPIO_PIN0);

    Task_sleep(120000);
#endif

    AFE4403_write_register_configs();



    int reg = 1;


    for(reg=1;reg<52;reg++)
    {
        AFE_REG_READ[reg] = AFE4403_reg_read(reg);
    }

//    uint32_t x,y,z;
//    x = AFE4403_reg_read(0x01);
//    y = AFE4403_reg_read(0x02);
//    z = AFE4403_reg_read(0x03);

    AFE_read_done_flag = 0;


    Semaphore_post(SEM_ADS_INITIALIZE);

#endif

    int i=0;
    int j=0;
    int k=0;
    int l=0;

    ADS_read_done_flag = 1;
//    while(1)
//    {

//        Semaphore_pend(SEM_AFE_RDY_GOES_LOW, BIOS_WAIT_FOREVER);
////        Semaphore_pend(SEM_ADS_DRDY_GOES_LOW, BIOS_NO_WAIT); //clear existing ADS ready semaphores.
//
//#if TIDA_BOARD && AFE_ENABLE && ADS_ENABLE
//        if(ADS_read_done_flag == 1)
//        {
//#endif
//            ADS_read_done_flag = 0;
//            Set_SPI_mode(SPI_MODE_AFE4403);
//
//            int32_t read_value, read_value_1, read_value_2, read_value_3;
//
//            read_value = AFE4403_reg_read(0x2A);
//            read_value_1 = AFE4403_reg_read(0x2B);
//            read_value_2 = AFE4403_reg_read(0x2C);
//            read_value_3 = AFE4403_reg_read(0x2D); //0x2D
//
//    /*
//            read_value = AFE4403_reg_read(0x01);
//            read_value_1 = AFE4403_reg_read(0x02);
//            read_value_2 = AFE4403_reg_read(0x03);
//            read_value_3 = AFE4403_reg_read(0x04);
//    */
//
////            LED2VAL[i] = read_value;
////            LED1VAL[i] = read_value_2;
////            LED2VAL_AMB[i] = read_value_1;
////            LED1VAL_AMB[i] = read_value_3;
//            i++;
//
//            Led_2 = read_value;
//            Led_1 = read_value_2;
//            Led_2_amb = read_value_1;
//            Led_1_amb = read_value_3;
//
//            if(i>=1000)
//            {
//                i=0;
//                j=0;
//                k=0;
//                l=0;
//            }
//
//    #if TIDA_BOARD && AFE_ENABLE && !ADS_ENABLE
//            UART_packet_format_and_send(AFE_ADS_DATA);
//    #endif
//
//#if TIDA_BOARD && AFE_ENABLE && ADS_ENABLE
//
//            Semaphore_post(SEM_AFE_READ_COMPLETE);
////            Task_sleep(1);
//            UART_packet_format_and_send(AFE_ADS_DATA);
//
//        }
//#endif
        Task_yield();
        //System_printf("AFE_main_task\n");
//    }

}

void AFE4403_enable_read(void)
{
    MSP_AFE_SPI_write(0x00,0x000001);
}


void AFE4403_disable_read(void)
{
    MSP_AFE_SPI_write(0x00,0x000000);
}

void AFE4403_reg_write(uint8_t reg_address, uint32_t data)
{
    AFE4403_disable_read();
    MSP_AFE_SPI_write(reg_address,data);
    AFE4403_enable_read();
}

int32_t AFE4403_reg_read(uint8_t reg_address)
{
    uint32_t data=0;
    uint32_t retVal = 0;

    MSP_AFE_SPI_read(reg_address, &data);
    retVal = data;



    if (reg_address >= 0x2A && reg_address <= 0x2D){
       retVal &= 0x003FFFFF;     // convert it to a 22 bit value
       if (retVal >= p2_22/2 /*(2^21)*/ )   // check if the ADC value is positive or negative
       {

         retVal = (retVal - p2_22);
       }
    }

    return retVal;
}

void AFE4403_write_register_configs(void)
{
    int i=0;

    while(AFE_REG[i][0] != 0xFF)
    {
         AFE4403_reg_write(AFE_REG[i][0], AFE_REG[i][1]);
         i++;
    }
}

void AFE_ADC_RDY_goes_low(void)
{
#if AFE_ENABLE

    Semaphore_post(SEM_AFE_RDY_GOES_LOW);  //Post the semaphore

#endif
}

void AFE_CS_low(void)
{

#if EVM_BOARD
    GPIO_setOutputLowOnPin(GPIO_PORT_P4, GPIO_PIN1);
#endif

#if TIDA_BOARD
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN4);
#endif

}

void AFE_CS_high(void)
{

#if EVM_BOARD
    GPIO_setOutputHighOnPin(GPIO_PORT_P4, GPIO_PIN1);
#endif

#if TIDA_BOARD
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN4);
#endif

}
