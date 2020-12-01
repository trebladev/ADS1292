#include "sys.h"         //系统配置
#include "delay.h"       //延时
#include "usart.h"       //串口  		
#include "led.h"       
#include "ADS1292.h"
#include "Timer.h"
#include "dma.h"



s32 get_volt(u32 num);//把采到的3个字节补码转成有符号32位数

//main
int main(void)
{	
		u8 res,i,sum;	
		u8 data_to_send[60];//串口发送缓存
		u8 usbstatus=0;	
		u32 cannle[2];	//存储两个通道的数据
		s32	p_Temp[2];	//数据缓存
	
		data_to_send[0]=0xAA;
		data_to_send[1]=0xAA;
		data_to_send[2]=0xF1;	
		data_to_send[3]=8;

//初始化系统时钟	 72M	
		SystemInit();	
		delay_init();	
		delay_ms(100);
		uart1_init(115200);//串口初始化为115200		
		DMA_Config(DMA1_Channel4,(u32)&USART1->DR,(u32)data_to_send);//串口1DMA设置
		USART_DMACmd(USART1,USART_DMAReq_Tx,ENABLE); //DMA	
		LED_Init();			

		ADS1292_Init();	//初始化ads1292					
		while(Set_ADS1292_Collect(0))//0 正常采集  //1 1mV1Hz内部侧试信号 //2 内部短接噪声测试
		{	
				printf("1292寄存器设置失败\r\n");
				delay_s(1);		
				DS3 =!DS3;	
				DS4 =!DS4;	
		}	
		printf("寄存器设置成功\r\n");
		delay_s(1);		
		DS3 =LEDOFF;		
		DS4 =LEDOFF;
		
		TIM2_Init(10000,7200);//系统指示
		//TIM4_Init(2000,7200);//按键消抖
		
		EXTI->IMR |= EXTI_Line8;//开DRDY中断			
		while(1)//循环发送数据		
		{				
				if(ads1292_recive_flag)
				{										
							cannle[0]=ads1292_Cache[3]<<16 | ads1292_Cache[4]<<8 | ads1292_Cache[5];//获取原始数据		
							cannle[1]=ads1292_Cache[6]<<16 | ads1292_Cache[7]<<8 | ads1292_Cache[8];
						
							p_Temp[0] = get_volt(cannle[0]);	//把采到的3个字节转成有符号32位数
							p_Temp[1] = get_volt(cannle[1]);	//把采到的3个字节转成有符号32位数
					
							//有符号数为再转为无符号，无符号数为逻辑右移
							cannle[0] = p_Temp[0];
							cannle[1]	= p_Temp[1];
							printf("%d /r/n",cannle[0]);
					/*
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
							DMA_Enable(DMA1_Channel4,13);//串口1DMA 
												*/											
							ads1292_recive_flag=0;
							delay_ms(20);
							sum = 0;	
				}
		}		
}


/*功能：把采到的3个字节转成有符号32位数 */
s32 get_volt(u32 num)
{		
			s32 temp;			
			temp = num;
			temp <<= 8;
			temp >>= 8;
			return temp;
}




/**********************************************************************
编译结果里面的几个数据的意义：
Code：表示程序所占用 FLASH 的大小（FLASH）
RO-data：即 Read Only-data， 表示程序定义的常量，如 const 类型（FLASH）
RW-data：即 Read Write-data， 表示已被初始化的全局变量（SRAM）
ZI-data：即 Zero Init-data， 表示未被初始化的全局变量(SRAM)
***********************************************************************/
