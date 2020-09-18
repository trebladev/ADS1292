#include "spi.h"
#include "delay.h" 

					  
//void SPI1_Init(void)
//{
//	GPIO_InitTypeDef GPIO_InitStructure;   
//	SPI_InitTypeDef SPI_InitStructure;	
//	
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_SPI1, ENABLE); 
//	
//	//SCK  PA5  //MISO  PA6	//MOSI  PA7
//  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;                                                                                                   
//  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;   
//  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;    //�����������
//  GPIO_Init(GPIOA,&GPIO_InitStructure);              //��ʼ����������
//				
//	SPI_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex;  //˫��˫��ȫ˫��
//	SPI_InitStructure.SPI_Mode = SPI_Mode_Master; 				//����Ϊ��SPI
//	SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b; 		//SPI����8bit����
//	SPI_InitStructure.SPI_CPOL = SPI_CPOL_Low; 					  //SCLK����Ϊ�ͣ���������������
//	SPI_InitStructure.SPI_CPHA = SPI_CPHA_2Edge; 					//�ڶ���ʱ�������ݱ�����
//	SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;							//Ƭѡ���������
//	SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_16; // ʱ�ӷ�Ƶ72M/x
//	SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB; 		//��λ��ǰ
//	SPI_InitStructure.SPI_CRCPolynomial = 7; 							//CRC����ֵ�Ķ���ʽ
//	SPI_Init(SPI1,&SPI_InitStructure); 	
//	SPI_Cmd(SPI1,ENABLE); //ʹ��SPI����
//}


////SPI �ٶ����ú���
////SPI_BaudRatePrescaler_2   2��Ƶ   (SPI 36M@sys 72M)
////SPI_BaudRatePrescaler_8   8��Ƶ   (SPI 9M@sys 72M)
////SPI_BaudRatePrescaler_16  16��Ƶ  (SPI 4.5M@sys 72M)
////SPI_BaudRatePrescaler_32  32��Ƶ  (SPI 2.25M@sys 72M)
////SPI_BaudRatePrescaler_256 256��Ƶ (SPI 281.25K@sys 72M)
////SPI1 �ٶ����ú���
//void SPI1_SetSpeed(u8 SpeedSet)
//{
//  	assert_param(IS_SPI_BAUDRATE_PRESCALER(SpeedSet));
//		SPI1->CR1&=0XFFC7;
//		SPI1->CR1|=SpeedSet;	//����SPI1�ٶ� 
//		SPI_Cmd(SPI1,ENABLE); 
//} 

////SPI1 ��дһ���ֽ�
////TxData Ҫд����ֽ�
////����ֵ ��ȡ�����ֽ�
//u8 SPI1_ReadWriteByte(u8 TxData)
//{
//				u8 retry=0;
//				while((SPI1->SR&1<<1)==0)//���ָ���ı�־λ������񣻷��ͻ���ձ�־λ  
//        {
//             retry++;
//             if(retry>200)return 0;
//        }                          
//        SPI1->DR=TxData;          //ͨ������SPIx����һ��byte
//        
//				retry=0;				
//        while((SPI1->SR&1<<0)==0) //���ָ���ı�־λ������񣻽��ջ���ǿձ�־λ
//        {
//             retry++;
//             if(retry>200)return 0;
//        }                                                             
//        return SPI1->DR;          //����ͨ������SPIx������յ�����			
//}




void SPI2_Init(void)
{
 	GPIO_InitTypeDef GPIO_InitStructure;
  SPI_InitTypeDef  SPI_InitStructure;

	RCC_APB2PeriphClockCmd(	RCC_APB2Periph_GPIOB, ENABLE );//PORTBʱ��ʹ�� 
	RCC_APB1PeriphClockCmd(	RCC_APB1Periph_SPI2,  ENABLE );//SPI2ʱ��ʹ�� 	
 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //PB13/14/15����������� 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);//��ʼ��GPIO
	
	SPI_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex;  //˫��˫��ȫ˫��
	SPI_InitStructure.SPI_Mode = SPI_Mode_Master; 				//����Ϊ��SPI
	SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b; 		//SPI����8bit����
	SPI_InitStructure.SPI_CPOL = SPI_CPOL_Low; 					  //SCLK����Ϊ�ͣ���������������
	SPI_InitStructure.SPI_CPHA = SPI_CPHA_2Edge; 					//�ڶ���ʱ�������ݱ�����
	SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;							//Ƭѡ���������
	SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2; //  �ٶ����� 4M
	SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB; 		//��λ��ǰ
	SPI_InitStructure.SPI_CRCPolynomial = 7; 							//CRC����ֵ�Ķ���ʽ
 	SPI_Init(SPI2,&SPI_InitStructure); 	

	SPI_Cmd(SPI2, ENABLE); //ʹ��SPI����
	
}   

//SPI �ٶ����ú���
//SpeedSet:
//SPI_BaudRatePrescaler_2   2��Ƶ   
//SPI_BaudRatePrescaler_8   8��Ƶ   
//SPI_BaudRatePrescaler_16  16��Ƶ  
//SPI_BaudRatePrescaler_256 256��Ƶ 
//void SPI2_SetSpeed(u8 SPI_BaudRatePrescaler)
//{
//  assert_param(IS_SPI_BAUDRATE_PRESCALER(SPI_BaudRatePrescaler));
//	SPI2->CR1&=0XFFC7;
//	SPI2->CR1|=SPI_BaudRatePrescaler;	//����SPI2�ٶ� 
//	SPI_Cmd(SPI2,ENABLE); 
//} 

//SPIx ��дһ���ֽ�
//TxData:Ҫд����ֽ�
//����ֵ:��ȡ�����ֽ�
u8 SPI2_ReadWriteByte(u8 TxData)
{		
	u8 retry=0;				 	
	while (SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_TXE) == RESET) //���ָ����SPI��־λ�������:���ͻ���ձ�־λ
		{
		retry++;
		if(retry>200)return 0;
		}			  
	SPI_I2S_SendData(SPI2, TxData); //ͨ������SPIx����һ������
	retry=0;

	while (SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_RXNE) == RESET) //���ָ����SPI��־λ�������:���ܻ���ǿձ�־λ
		{
		retry++;
		if(retry>200)return 0;
		}	  						    
	return SPI_I2S_ReceiveData(SPI2); //����ͨ��SPIx������յ�����					    
}

