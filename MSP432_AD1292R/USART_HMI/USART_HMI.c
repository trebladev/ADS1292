/*
 * @Author: xzw
 * @Date: 2020-09-06 23:31:52
 * @LastEditors: xzw
 * @LastEditTime: 2020-09-12 20:05:45
 * @Description: file content
 */
#include "USART_HMI.h"
#include "sys.h"
#include <stdio.h>
#include "usart.h"
#include "string.h"


u8 Ending[3]={0xFF,0xFF,0xFF};
char data_dma_send_in[60];
/**
 * @name: send_ending_flag
 * @msg: 用于发送串口屏的指令结束标志
 * @param {none} 
 * @return {none} 
 */
void send_ending_flag()
{
	MAP_UART_transmitData(EUSCI_A0_BASE,Ending[0]);
	MAP_UART_transmitData(EUSCI_A0_BASE,Ending[0]);
	MAP_UART_transmitData(EUSCI_A0_BASE,Ending[0]);
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

/**
 * @name: draw_point
 * @msg: 自定义在屏幕上画点
 * @param {int x:点的横坐标
 * 		   int y:点的纵坐标
 *         char color:点的颜色} 
 * @return {type} 
 */
void draw_point(int x,int last_x,int y,int last_y,char* color)
{
	printf("line %d,%d,%d,%d,%s",x,y,last_x,last_y,color);
	send_ending_flag();
}

/**
 * @name: draw_curve
 * @msg: 自定义在屏幕上画不平移的曲线
 * @param {int y:纵坐标的值
 *         char color:曲线的颜色} 
 * @return {type} 
 */
void draw_curve(int y,int last_y,char* color)
{
	static int x;
	//int lenth;
	draw_point(x,x,y,last_y,color);
	delay_us(1);
	printf("draw %d,300,%d,600,BLACK",(x+1),(x+50));
	//sprintf(data_dma_send,"draw %d,300,%d,600,BLACK",(x+1),(x+50));
	send_ending_flag();
	x++;
	if(x>1024)
	{
		x = 0;
	}
}


