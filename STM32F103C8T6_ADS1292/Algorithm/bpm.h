/*
 * @Autor: xzw
 * @Date: 2020-09-16 09:41:49
 * @LastEditors: xzw
 * @LastEditTime: 2020-09-16 09:48:58
 * @Description: 
 */
#ifndef __bpm_H
#define __bpm_H

#include "sys.h"
#include "stm32f10x.h"
#include "arm_math.h"
#include "findpeaks.h"

#define FPS 500

int32_t bpm_calculate(int32_t *location,int32_t size);


#endif //__bpm_H


