/*
 * @Author: xzw
 * @Date: 2020-09-06 23:31:52
 * @LastEditors: xzw
 * @LastEditTime: 2020-09-09 17:26:42
 * @Description: file content
 */
#include "USART_HMI.h"
#include "sys.h"
#include <stdio.h>
#include "usart.h"

u8 Ending[3]={0xFF,0xFF,0xFF};


/**
 * @name: send_ending_flag
 * @msg: 用于发送串口屏的指令结束标志
 * @param {none} 
 * @return {none} 
 */
void send_ending_flag()
{
	HAL_UART_Transmit(&huart1,Ending,3,0xFFFF);
}

/**
 * @name: set_number_control_val
 * @msg: 改变数字控件的val属性
 * @param {int id:用于设置控件的id
 * 		   int val:改变的数值} 
 * @return {none} 
 */
void set_number_control_val(int id,int val)
{
	char send_cache[20];
	sprintf(send_cache,"n%d=%d",id,val);
	
}


