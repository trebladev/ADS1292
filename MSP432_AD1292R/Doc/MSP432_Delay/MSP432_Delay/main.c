//*****************************************************************************
//
// MSP432 main.c template - Empty main
//
//****************************************************************************

#include "msp.h"
#include "driverlib.h"
#include "delay.h"
uint32_t temp,temp1,temp2,temp3,temp4,temp5;
void main(void)
{
	
    WDTCTL = WDTPW | WDTHOLD;           // Stop watchdog timer
    /* 第一步需要配置我们的时钟引脚，这里的高速时钟使用的是 */
    /* Configuring pins for peripheral/crystal usage for output */
    MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_PJ,
            GPIO_PIN3 | GPIO_PIN4, GPIO_PRIMARY_MODULE_FUNCTION);
    MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(GPIO_PORT_PJ,
            GPIO_PIN0 | GPIO_PIN1, GPIO_PRIMARY_MODULE_FUNCTION);

    /* Setting the external clock frequency. This API is optional, but will
     * come in handy if the user ever wants to use the getMCLK/getACLK/etc
     * functions
     */
    CS_setExternalClockSourceFrequency(32768,48000000);

    /* Starting HFXT in non-bypass mode without a timeout. Before we start
     * we have to change VCORE to 1 to support the 48MHz frequency */
    MAP_PCM_setCoreVoltageLevel(PCM_VCORE1);
    MAP_FlashCtl_setWaitState(FLASH_BANK0, 2);
    MAP_FlashCtl_setWaitState(FLASH_BANK1, 2);
    CS_startHFXT(false);

    /* Initializing ACLK to LFXT (effectively 32khz) */
    MAP_CS_initClockSignal(CS_ACLK, CS_LFXTCLK_SELECT, CS_CLOCK_DIVIDER_1);
    /* Initializing BCLK to LFXT (effectively 48MHz) */
    MAP_CS_initClockSignal(CS_BCLK, CS_LFXTCLK_SELECT, CS_CLOCK_DIVIDER_1);
    /* Initializing HSMCLK to LFXT (effectively 32khz) */
    MAP_CS_initClockSignal(CS_HSMCLK, CS_HFXTCLK_SELECT, CS_CLOCK_DIVIDER_1);
    /* Initializing HSMCLK to LFXT (effectively 32khz) */
    MAP_CS_initClockSignal(CS_MCLK, CS_HFXTCLK_SELECT, CS_CLOCK_DIVIDER_16);
    /* Initializing HSMCLK to LFXT (effectively 32khz) */
    MAP_CS_initClockSignal(CS_SMCLK, CS_HFXTCLK_SELECT, CS_CLOCK_DIVIDER_1);

    GPIO_setAsOutputPin(GPIO_PORT_P1,GPIO_PIN0);
    GPIO_setOutputHighOnPin(GPIO_PORT_P1,GPIO_PIN0);
    delay_init(CS_getMCLK());

    while(1){
    	temp = CS_getACLK();
    	temp1 = CS_getBCLK();
    	temp2 = CS_getDCOFrequency();
    	temp3 = CS_getHSMCLK();
    	temp4 = CS_getMCLK();
    	temp5 = CS_getSMCLK();
    	delay_ms(500);
    	delay_ms(500);
        GPIO_toggleOutputOnPin(GPIO_PORT_P1,GPIO_PIN0);
    }
}
