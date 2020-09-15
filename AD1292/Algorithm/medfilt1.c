/*
 * @Author: your name
 * @Date: 2020-09-15 09:46:35
 * @LastEditTime: 2020-09-15 11:27:52
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \MDK-ARMd:\github\ADS1292\ADS1292\AD1292\Algorithm\medfilt1.c
 */
#include "sys.h"
#include "medfilt1.h"

float32_t mid_cache[midfilt_num];

float32_t midfilt1(float32_t *p_input,int size,int blocksize)
{
    int i;                                                    
    float32_t *input;                           //缓存数组
    float32_t mid_val;                                        //中位数

		input = p_input;
	
    for(i=0;i<size-blocksize+1;i++)                                     
    {
        arm_copy_f32(input+i,mid_cache,blocksize);          //将被滤波数组的窗口值放入缓存数组

        //mid_val = find_mid_val(mid_cache,blocksize);          //找到中位数
			  maxim_sort_ascend(mid_cache,size);
			
			  mid_val = mid_cache[(size+1)/2];                  //找到缓存数组的中位数

        //*(input+(2*i+1+blocksize)/2) = mid_val;             //用中位数代替原数组中间的数字
    }
	  return mid_val;
}




float32_t find_mid_val(float32_t *p_input,int size)
{
    float32_t mid_cache[size],*input;                        //设置缓存数组
    float32_t mid_val;                                //数组的中位数
	  input = p_input;
    arm_copy_f32(input,mid_cache,size);             //将输入数组放入缓存数组中
    maxim_sort_ascend(mid_cache,size);                //对缓存数组进行升序排列

    mid_val = mid_cache[(size+1)/2];                  //找到缓存数组的中位数

    return mid_val;

}







