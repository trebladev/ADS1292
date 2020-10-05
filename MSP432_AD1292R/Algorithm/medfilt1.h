/*
 * @Author: xzw
 * @Date: 2020-09-15 09:46:45
 * @LastEditTime: 2020-09-15 10:40:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \MDK-ARMd:\github\ADS1292\ADS1292\AD1292\Algorithm\medfilt1.h
 */
#ifndef __medfilt1_H
#define __medfilt1_H


#include "sys.h"
#include "arm_math.h"
#include "arm_const_structs.h"
#include "arm_common_tables.h"
#include "findpeaks.h"

#define midfilt_num 125

float32_t midfilt1(float32_t *p_input,int size,int blocksize);

float32_t find_mid_val(float32_t *p_input,int size);


#endif //__medfilt1_H


