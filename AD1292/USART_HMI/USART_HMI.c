#include "USART_HMI.h"
#include "sys.h"
#include <stdio.h>
#include "usart.h"

u8 Ending[3]={0xFF,0xFF,0xFF};



void send_ending_flag()
{
	HAL_UART_Transmit(&huart1,Ending,3,0xFFFF);
}



