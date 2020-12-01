#ifndef __USART_H
#define __USART_H
#include "sys.h" 



//UART1 TX PA9 RX PA10
//UART2 TX PA2 RX PA3

#define UART1_DEBUG

//串口缓冲区大小
#define USART_REC_LEN  			255  	//定义最大接收字节数 200
  	
		
extern u8 USART_RX_BUF[USART_REC_LEN] ;   //接收缓冲                         
extern u16 USART_RX_STA;         		//接收状态标记	

extern u8 USART2_RX_BUF[USART_REC_LEN] ;   //接收缓冲   
extern u16 USART2_RX_STA;         		//接收状态标记	

void uart1_init(u32 bound);



void uart2_init(u32 bound);
void USARTx_Send(USART_TypeDef* USARTx, u8 *Data, u8 Len);  
void u2_printf(char* fmt,...);  


#endif

