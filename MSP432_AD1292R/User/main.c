#include <driverlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <delay.h>
#include <sys.h>
#include <usart.h>
#include <arm_math.h>
#include <gpio_u.h>
#include <AD1292.h>

uint8_t TXData = 2;

int main()
{
		u8 res,i,sum;	
	  uint8_t data_to_send[60];//串口发送缓存
		uint8_t usbstatus=0;	
		u32 cannle[2];	//存储两个通道的数据
		s32	p_Temp[2];	//数据缓存
	
	
	  data_to_send[0]=0xAA;
	  data_to_send[1]=0xAA;
	  data_to_send[2]=0xF1;	
	  data_to_send[3]=8;
	
	
    volatile uint32_t ii;
		volatile uint32_t temp4;
    /* Halting the Watchdog */
    MAP_WDT_A_holdTimer();
		
		Msp432_Clock_Init();
		
		
		Usart_Init();

		FPU_enableModule();
    /* Configuring P1.0 as output */
    //MAP_GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
		
	  //MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1);
    //MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1);
    //MAP_GPIO_enableInterrupt(GPIO_PORT_P1, GPIO_PIN1);
    //MAP_Interrupt_enableInterrupt(INT_PORT1);
	
		//temp4 = CS_getMCLK();
		//MAP_Interrupt_enableMaster(); 
		
		GPIO_Init();
		
		delay_init(CS_getMCLK());
		
		ADS1292_Init();
		
		while(Set_ADS1292_Collect(0))//0 正常采集  //1 1mV1Hz内部侧试信号 //2 内部短接噪声测试
		{	
				printf("1292寄存器设置失败\r\n");
		}	
		printf("寄存器设置成功\r\n");
		
		MAP_GPIO_enableInterrupt(GPIO_PORT_P3,GPIO_PIN6);

    while (1)
    {
        /* Delay Loop */
        //delay_ms(1000);
			
				//temp4 = CS_getSMCLK();

        //MAP_GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
				//printf("SMCLK=%d",temp4);
			
				//MAP_UART_transmitData(EUSCI_A0_BASE,TXData);
				if(ads1292_recive_flag)
					{										
								cannle[0]=ads1292_Cache[3]<<16 | ads1292_Cache[4]<<8 | ads1292_Cache[5];//获取原始数据		
								cannle[1]=ads1292_Cache[6]<<16 | ads1292_Cache[7]<<8 | ads1292_Cache[8];
						
								p_Temp[0] = get_volt(cannle[0]);	//把采到的3个字节转成有符号32位数
								p_Temp[1] = get_volt(cannle[1]);	//把采到的3个字节转成有符号32位数
					
								//有符号数为再转为无符号，无符号数为逻辑右移
								cannle[0] = p_Temp[0];
								cannle[1]	= p_Temp[1];
								data_to_send[4]=cannle[0]>>24;		//25-32位
								data_to_send[5]=cannle[0]>>16;  	//17-24
								data_to_send[6]=cannle[0]>>8;		//9-16
								data_to_send[7]=cannle[0]; 			//1-8

								data_to_send[8]=cannle[1]>>24;		//25-32位
								data_to_send[9]=cannle[1]>>16;  	//17-24
								data_to_send[10]=cannle[1]>>8;		//9-16
								data_to_send[11]=cannle[1];			 //1-8
							
								for(i=0;i<12;i++)
										sum += data_to_send[i];							
								data_to_send[12] = sum;	//校验和																		
								//DMA_Enable(DMA1_Channel4,13);//串口1DMA 
																							
								ads1292_recive_flag=0;
								sum = 0;	
				}
		}		
			

    }


int  fputc(int _c, register FILE *_fp)
{
    MAP_UART_transmitData(EUSCI_A0_BASE,(uint8_t)_c);
     while (!MAP_UART_getInterruptStatus(EUSCI_A0_BASE,
                                        EUSCI_A_UART_TRANSMIT_INTERRUPT_FLAG));
     EUSCI_A_CMSIS(EUSCI_A0_BASE)->IFG |= (EUSCI_A_UART_TRANSMIT_INTERRUPT_FLAG);
    return _c;
}

int  fputs(const char *_ptr, register FILE *_fp)
{
	uint16_t i, len;
	len = strlen(_ptr);
	for(i=0; i<len; i++)
	{
		MAP_UART_transmitData( EUSCI_A0_BASE , (unsigned char)_ptr[i] );
		while (!MAP_UART_getInterruptStatus(EUSCI_A0_BASE,EUSCI_A_UART_TRANSMIT_INTERRUPT_FLAG));
		EUSCI_A_CMSIS(EUSCI_A0_BASE)->IFG |= (EUSCI_A_UART_TRANSMIT_INTERRUPT_FLAG);
	}
    return len;

}

/* GPIO ISR */
void PORT3_IRQHandler(void)
{
    uint32_t status;

    status = MAP_GPIO_getEnabledInterruptStatus(GPIO_PORT_P1);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, status);

    /* Toggling the output on the LED */
    if(status & !GPIO_PIN3)
    {
        PA8_IRQHandler();//MAP_GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
    }

}

	

