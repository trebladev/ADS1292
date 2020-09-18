#ifndef __USART_H
#define __USART_H
#include "sys.h" 



//UART1 TX PA9 RX PA10
//UART2 TX PA2 RX PA3

#define UART1_DEBUG

//���ڻ�������С
#define USART_REC_LEN  			255  	//�����������ֽ��� 200
  	
		
extern u8 USART_RX_BUF[USART_REC_LEN] ;   //���ջ���                         
extern u16 USART_RX_STA;         		//����״̬���	

extern u8 USART2_RX_BUF[USART_REC_LEN] ;   //���ջ���   
extern u16 USART2_RX_STA;         		//����״̬���	

void uart1_init(u32 bound);



void uart2_init(u32 bound);
void USARTx_Send(USART_TypeDef* USARTx, u8 *Data, u8 Len);  
void u2_printf(char* fmt,...);  


#endif

