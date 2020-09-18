#ifndef __SPI_H
#define __SPI_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEKս��STM32������
//SPI���� ����	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/9
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////

u8 SPI1_ReadWriteByte(u8 TxData);//SPI���߶�дһ���ֽ�
u8 SPI2_ReadWriteByte(u8 TxData);//SPI���߶�дһ���ֽ�

 			
void SPI1_SetSpeed(u8 SpeedSet); //����SPI�ٶ�   			
void SPI2_SetSpeed(u8 SpeedSet); //����SPI�ٶ�   

void SPI1_Init(void);			 //��ʼ��SPI��
void SPI2_Init(void);			 //��ʼ��SPI��	


//OLED��������
//              VCC  ��5V��3.3v��Դ
//              D0   ��PD6��SCL��       //ʱ������
//              D1   ��PD7��SDA��       //��������
//              RES  ��PD4              //��λ
//              DC   ��PD5              //���������������
//              CS   ��PD3              //Ƭѡ 


#define	 OLED_RCC       RCC_APB2Periph_GPIOD
#define	 OLED_GPIO      GPIOD
#define	 OLED_SPI_CS    GPIO_Pin_2
#define	 OLED_SPI_DC    GPIO_Pin_3
#define	 OLED_SPI_RES   GPIO_Pin_4
#define	 OLED_SPI_SCLK  GPIO_Pin_6
#define	 OLED_SPI_SDIN  GPIO_Pin_7

//-----------------OLED�˿ڶ���----------------  	

#define OLED_CS_0()  GPIO_ResetBits(OLED_GPIO,OLED_SPI_CS)//CS
#define OLED_CS_1()  GPIO_SetBits(OLED_GPIO,OLED_SPI_CS)

#define OLED_DC_0()  GPIO_ResetBits(OLED_GPIO,OLED_SPI_DC)//DC
#define OLED_DC_1()  GPIO_SetBits(OLED_GPIO,OLED_SPI_DC)

#define OLED_RST_0() GPIO_ResetBits(OLED_GPIO,OLED_SPI_RES)//RES
#define OLED_RST_1() GPIO_SetBits(OLED_GPIO,OLED_SPI_RES)

#define OLED_SCLK_0() GPIO_ResetBits(OLED_GPIO,OLED_SPI_SCLK)//SCL
#define OLED_SCLK_1() GPIO_SetBits(OLED_GPIO,OLED_SPI_SCLK)

#define OLED_SDIN_0() GPIO_ResetBits(OLED_GPIO,OLED_SPI_SDIN)//SDA
#define OLED_SDIN_1() GPIO_SetBits(OLED_GPIO,OLED_SPI_SDIN)

void OLED_SPI_Init(void);



#endif





/*
#define EPD_W21_WRITE_DATA 1
#define EPD_W21_WRITE_CMD  0
#define EPD_W21_SPI_SPEED 0x02


#define GPIO_PORT_EPD_W21	GPIOA										
#define RCC_EPD_W21_PORT 	RCC_APB2Periph_GPIOA		
#define EPD_W21_MOSI  GPIO_Pin_8
#define EPD_W21_CLK   GPIO_Pin_7
#define EPD_W21_CS    GPIO_Pin_6
#define EPD_W21_DC    GPIO_Pin_5
#define EPD_W21_RST   GPIO_Pin_4
#define EPD_W21_BUSY  GPIO_Pin_0

#define EPD_W21_MOSI_0	GPIO_ResetBits(GPIO_PORT_EPD_W21, EPD_W21_MOSI)  //SDI
#define EPD_W21_MOSI_1	GPIO_SetBits(GPIO_PORT_EPD_W21, EPD_W21_MOSI)
#define EPD_W21_CLK_0	GPIO_ResetBits(GPIO_PORT_EPD_W21, EPD_W21_CLK)  //SCK
#define EPD_W21_CLK_1	GPIO_SetBits(GPIO_PORT_EPD_W21, EPD_W21_CLK)
#define EPD_W21_CS_0	GPIO_ResetBits(GPIO_PORT_EPD_W21, EPD_W21_CS)  //CS
#define EPD_W21_CS_1	GPIO_SetBits(GPIO_PORT_EPD_W21, EPD_W21_CS)
#define EPD_W21_DC_0	GPIO_ResetBits(GPIO_PORT_EPD_W21, EPD_W21_DC)  //DC
#define EPD_W21_DC_1	GPIO_SetBits(GPIO_PORT_EPD_W21, EPD_W21_DC)
#define EPD_W21_RST_0	GPIO_ResetBits(GPIO_PORT_EPD_W21, EPD_W21_RST)  //RES
#define EPD_W21_RST_1	GPIO_SetBits(GPIO_PORT_EPD_W21, EPD_W21_RST)
#define EPD_W21_BUSY_in GPIO_ReadInputDataBit(GPIO_PORT_EPD_W21, EPD_W21_BUSY) // BUSY 



//��������
void EPD_W21_GPIO_Configuration(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;

	 //������������  RST DC CS CLK MOSI
  RCC_APB2PeriphClockCmd(RCC_EPD_W21_PORT, ENABLE);
  GPIO_InitStructure.GPIO_Pin = EPD_W21_RST|EPD_W21_DC |EPD_W21_DC|EPD_W21_CS|EPD_W21_CLK|EPD_W21_MOSI;  
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIO_PORT_EPD_W21, &GPIO_InitStructure);

  //�����������  BUSY
  GPIO_InitStructure.GPIO_Pin = EPD_W21_BUSY;   
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
  GPIO_Init(GPIO_PORT_EPD_W21, &GPIO_InitStructure);
	
}

void SPI_Delay(u8 xrate)
{
	u8 i;
	while(xrate)
	{
		for(i=0;i<EPD_W21_SPI_SPEED;i++);
		xrate--;
	}
}
void SPI_Write(u8 value)                                    
{                                                           
    u8 i;
		SPI_Delay(1);
    for(i=0; i<8; i++)   
    {
        EPD_W21_CLK_0;
				SPI_Delay(1);
        if(value & 0x80)
        	EPD_W21_MOSI_1;
        else
        	EPD_W21_MOSI_0;		
        value = (value << 1); 
				SPI_Delay(1);
				delay_us(1);
        EPD_W21_CLK_1; 
        SPI_Delay(1);
    }
}
void EPD_W21_WriteCMD(u8 command)
{
    SPI_Delay(1);
    EPD_W21_CS_0;                   
		EPD_W21_DC_0;		// command write
		SPI_Write(command);
		EPD_W21_CS_1;
}
void EPD_W21_WriteDATA(unsigned char command)
{
    SPI_Delay(1);
    EPD_W21_CS_0;                   
		EPD_W21_DC_1;		// command write
		SPI_Write(command);
		EPD_W21_CS_1;
}
u8 EPD_W21_ReadDATA(void)
{
	return 0;
}	



*/