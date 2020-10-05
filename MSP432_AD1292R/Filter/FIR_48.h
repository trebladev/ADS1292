/*
 * @Author: xzw
 * @Date: 2020-09-08 14:27:56
 * @LastEditors: xzw
 * @LastEditTime: 2020-09-08 15:23:17
 * @Description: file content
 */


#ifndef __FIR_48_H
#define __FIR_48_H

#include "sys.h"
#include "arm_math.h"
#include "arm_const_structs.h"
#include "arm_common_tables.h"

//#define LENGTH_SAMPLES       10    //采样点数
#define BLOCK_SIZE           1      //调用一次dsp函数处理的点数
#define NUM_TAPS             29       //滤波器个数


void arm_fir_f32_lp_48(float32_t *Input_buffer,float32_t *Output_buffer);

void arm_fir_f32_lp_5(float32_t *Input_buffer,float32_t *Output_buffer);

void arm_fir48_init(void);

void arm_fir5_init(void);
#endif //__FIR_48_H

