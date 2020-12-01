#include "sys.h"         //ϵͳ����
#include "delay.h"       //��ʱ
#include "usart.h"       //����  		
#include "led.h"       
#include "ADS1292.h"
#include "Timer.h"
#include "dma.h"



s32 get_volt(u32 num);//�Ѳɵ���3���ֽڲ���ת���з���32λ��

//main
int main(void)
{	
		u8 res,i,sum;	
		u8 data_to_send[60];//���ڷ��ͻ���
		u8 usbstatus=0;	
		u32 cannle[2];	//�洢����ͨ��������
		s32	p_Temp[2];	//���ݻ���
	
		data_to_send[0]=0xAA;
		data_to_send[1]=0xAA;
		data_to_send[2]=0xF1;	
		data_to_send[3]=8;

//��ʼ��ϵͳʱ��	 72M	
		SystemInit();	
		delay_init();	
		delay_ms(100);
		uart1_init(115200);//���ڳ�ʼ��Ϊ115200		
		DMA_Config(DMA1_Channel4,(u32)&USART1->DR,(u32)data_to_send);//����1DMA����
		USART_DMACmd(USART1,USART_DMAReq_Tx,ENABLE); //DMA	
		LED_Init();			

		ADS1292_Init();	//��ʼ��ads1292					
		while(Set_ADS1292_Collect(0))//0 �����ɼ�  //1 1mV1Hz�ڲ������ź� //2 �ڲ��̽���������
		{	
				printf("1292�Ĵ�������ʧ��\r\n");
				delay_s(1);		
				DS3 =!DS3;	
				DS4 =!DS4;	
		}	
		printf("�Ĵ������óɹ�\r\n");
		delay_s(1);		
		DS3 =LEDOFF;		
		DS4 =LEDOFF;
		
		TIM2_Init(10000,7200);//ϵͳָʾ
		//TIM4_Init(2000,7200);//��������
		
		EXTI->IMR |= EXTI_Line8;//��DRDY�ж�			
		while(1)//ѭ����������		
		{				
				if(ads1292_recive_flag)
				{										
							cannle[0]=ads1292_Cache[3]<<16 | ads1292_Cache[4]<<8 | ads1292_Cache[5];//��ȡԭʼ����		
							cannle[1]=ads1292_Cache[6]<<16 | ads1292_Cache[7]<<8 | ads1292_Cache[8];
						
							p_Temp[0] = get_volt(cannle[0]);	//�Ѳɵ���3���ֽ�ת���з���32λ��
							p_Temp[1] = get_volt(cannle[1]);	//�Ѳɵ���3���ֽ�ת���з���32λ��
					
							//�з�����Ϊ��תΪ�޷��ţ��޷�����Ϊ�߼�����
							cannle[0] = p_Temp[0];
							cannle[1]	= p_Temp[1];
							printf("%d /r/n",cannle[0]);
					/*
							data_to_send[4]=cannle[0]>>24;		//25-32λ
							data_to_send[5]=cannle[0]>>16;  	//17-24
							data_to_send[6]=cannle[0]>>8;		//9-16
							data_to_send[7]=cannle[0]; 			//1-8

							data_to_send[8]=cannle[1]>>24;		//25-32λ
							data_to_send[9]=cannle[1]>>16;  	//17-24
							data_to_send[10]=cannle[1]>>8;		//9-16
							data_to_send[11]=cannle[1];			 //1-8
							
							for(i=0;i<12;i++)
									sum += data_to_send[i];							
							data_to_send[12] = sum;	//У���																		
							DMA_Enable(DMA1_Channel4,13);//����1DMA 
												*/											
							ads1292_recive_flag=0;
							delay_ms(20);
							sum = 0;	
				}
		}		
}


/*���ܣ��Ѳɵ���3���ֽ�ת���з���32λ�� */
s32 get_volt(u32 num)
{		
			s32 temp;			
			temp = num;
			temp <<= 8;
			temp >>= 8;
			return temp;
}




/**********************************************************************
����������ļ������ݵ����壺
Code����ʾ������ռ�� FLASH �Ĵ�С��FLASH��
RO-data���� Read Only-data�� ��ʾ������ĳ������� const ���ͣ�FLASH��
RW-data���� Read Write-data�� ��ʾ�ѱ���ʼ����ȫ�ֱ�����SRAM��
ZI-data���� Zero Init-data�� ��ʾδ����ʼ����ȫ�ֱ���(SRAM)
***********************************************************************/
