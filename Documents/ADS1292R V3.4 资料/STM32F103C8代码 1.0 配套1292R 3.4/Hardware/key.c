#include "key.h"




u8 KEY_TYPE;

//��������Դ���Ƴ�ʼ��
void KEY1_Init(void) //IO��ʼ��
{ 
		GPIO_InitTypeDef GPIO_InitStructure;
		EXTI_InitTypeDef 	EXTI_InitStructure;
		NVIC_InitTypeDef	NVIC_InitStructure;
	
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB|RCC_APB2Periph_AFIO,ENABLE);//ʹ��PORTA,PORTEʱ��
	
		GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_9;	
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//��������
		GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	
		//KEY1 B9  
		EXTI_ClearITPendingBit(EXTI_Line9);   //����жϱ�־
  	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB,GPIO_PinSource9);//ѡ��ܽ�
  	EXTI_InitStructure.EXTI_Line=EXTI_Line9;	//ѡ���ж���·
  	EXTI_Init(&EXTI_InitStructure);	 	
 
	
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
  	NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;					//ѡ���ж�ͨ��
  	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;	//��ռ���ȼ� 
  	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;				//�����ȼ�
  	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;						//ʹ���ⲿ�ж�ͨ��
}






			    


