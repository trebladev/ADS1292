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
#include "stm32f4xx.h"
#include "arm_math.h"
#include "arm_const_structs.h"
#include "arm_common_tables.h"
#include "findpeaks.h"

#define FPS 321

int32_t bpm_calculate(int32_t *location,int32_t size);


#endif //__bpm_H


