#include "sys.h"         //ϵͳ����
#include "delay.h"       //��ʱ
#include "usart.h"       //����  		
#include "led.h"       
#include "ADS1292.h"
#include "Timer.h"
#include "dma.h"
#include "arm_math.h"
#include "findpeaks.h"
#include "bpm.h"


float32_t a1,b1;                           //������ʾϵ��
float32_t val1,val2;
float32_t val_init_data[Val_Init_Num];     //���ʳ�ʼ������
float32_t breath_init_cache[Val_Init_Num]; //������ʼ������
u8 Ending[3]={0xFF,0xFF,0xFF};
int32_t bpm_cache[1000];                   //�������ʵ����ݻ���
static float bpm;                          //������ֵ

int32_t pn_npks;                           //���ʷ�ֵ��⺯����ֵ����
int32_t pn_locs[15];                       //���ʷ�ֵ��⺯�������ֵ��	

s32 get_volt(u32 num);//�Ѳɵ���3���ֽڲ���ת���з���32λ��


//main
int main(void)
{	

		static uint16_t j;
		u32 cannle[2];	//�洢����ͨ��������
		s32	p_Temp[2];	//���ݻ���
	

//��ʼ��ϵͳʱ��	 72M	
		SystemInit();	
		delay_init();	
		delay_ms(100);
		uart1_init(115200);//���ڳ�ʼ��Ϊ115200		
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
		
		
		EXTI->IMR |= EXTI_Line8;//��DRDY�ж�			
		Get_val_init_data(val_init_data,breath_init_cache);
		
		ADS1292_val_init(val_init_data,&a1,&b1);
		
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
					
							val1 = cannle[1]*(a1)+b1;                                //�����ݸ�Ϊ���ڴ�������ʾ����ֵ
					
							bpm_cache[j] = (int)val1;                                //�������ݴ��������
					
							j++;
					
							if(j>1000)
							{
								
							  maxim_peaks_above_min_height(pn_locs,&pn_npks,bpm_cache,1000,165);                   //Ѱ��165���ϵķ�
								
								bpm = bpm_calculate(pn_locs,pn_npks);                                                //��������
								
								printf("n0.val=%d",(int)bpm);                                                        //����������ֵ
								/*���ͽ���λ*/
								USART_SendData(USART1,Ending[0]);
								while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);
								USART_SendData(USART1,Ending[1]);
								while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);
								USART_SendData(USART1,Ending[2]);
								while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);
								
								j=0;
							}
					
							printf("add 3,0,%d",(int)val1);                                //���ʹ�������ͼָ��
							/*���ͽ���λ*/
							USART_SendData(USART1,Ending[0]);
							while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);
							USART_SendData(USART1,Ending[1]);
							while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);
							USART_SendData(USART1,Ending[2]);
							while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);
					
											
							ads1292_recive_flag=0;
				}
		}		
}






/**********************************************************************
����������ļ������ݵ����壺
Code����ʾ������ռ�� FLASH �Ĵ�С��FLASH��
RO-data���� Read Only-data�� ��ʾ������ĳ������� const ���ͣ�FLASH��
RW-data���� Read Write-data�� ��ʾ�ѱ���ʼ����ȫ�ֱ�����SRAM��
ZI-data���� Zero Init-data�� ��ʾδ����ʼ����ȫ�ֱ���(SRAM)
***********************************************************************/
