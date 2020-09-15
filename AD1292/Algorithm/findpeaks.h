/*
 * @Author: xzw
 * @Date: 2020-09-06 12:18:29
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2020-09-15 10:43:48
 * @Description: {
                  maxim_find_peaks整合所有功能
                  maxim_peaks_above_min_height寻找超过最小高度的波峰
                  maxim_remove_close_peaks移除设定距离以内的波峰
                  maxim_sort_ascend升序排序
                  maxim_sort_indices_descend下降排序
                    }
 */

#ifndef __findpeaks_H
#define __findpeaks_H

#include "sys.h"
#include "stm32f4xx.h"
#include "arm_math.h"
#include "arm_const_structs.h"
#include "arm_common_tables.h"


void maxim_find_peaks( int32_t *pn_locs, int32_t *pn_npks,  int32_t *pn_x, int32_t n_size, int32_t n_min_height, int32_t n_min_distance, int32_t n_max_num );
void maxim_peaks_above_min_height( int32_t *pn_locs, int32_t *pn_npks,  int32_t *pn_x, int32_t n_size, int32_t n_min_height );
void maxim_remove_close_peaks( int32_t *pn_locs, int32_t *pn_npks,   int32_t  *pn_x, int32_t n_min_distance );
void maxim_sort_ascend(float32_t *pn_x, int32_t n_size );
void maxim_sort_indices_descend(  int32_t  *pn_x, int32_t *pn_indx, int32_t n_size);

#endif  //__findpeaks_H

