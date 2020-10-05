/*
 * @Author: xzw
 * @Date: 2020-09-06 10:18:20
 * @LastEditors: xzw
 * @LastEditTime: 2020-09-06 13:40:07
 * @Description: 用于陶晶驰串口屏串口指令
 */

#ifndef __USART_HMI_H
#define __USART_HMI_H

#include "delay.h"
#include <sys.h>


void send_ending_flag();    //结束符发送指令

void set_number_control_val(int id,int val);

void draw_point(int x,int last_x,int y,int last_y,char* color);

void draw_curve(int x,int last_x,char* color);

void trim(char *strIn, char *strOut);
#endif


