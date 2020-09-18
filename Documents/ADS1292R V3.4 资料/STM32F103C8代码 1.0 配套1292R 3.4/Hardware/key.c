#include "key.h"




u8 KEY_TYPE;

//按键及电源控制初始化
void KEY1_Init(void) //IO初始化
{ 
		GPIO_InitTypeDef GPIO_InitStructure;
		EXTI_InitTypeDef 	EXTI_InitStructure;
		NVIC_InitTypeDef	NVIC_InitStructure;
	
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB|RCC_APB2Periph_AFIO,ENABLE);//使能PORTA,PORTE时钟
	
		GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_9;	
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//上拉输入
		GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	
		//KEY1 B9  
		EXTI_ClearITPendingBit(EXTI_Line9);   //清除中断标志
  	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB,GPIO_PinSource9);//选择管脚
  	EXTI_InitStructure.EXTI_Line=EXTI_Line9;	//选择中断线路
  	EXTI_Init(&EXTI_InitStructure);	 	
 
	
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
  	NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;					//选择中断通道
  	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;	//抢占优先级 
  	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;				//子优先级
  	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;						//使能外部中断通道
}






			    


