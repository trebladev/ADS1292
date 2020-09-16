/*
 * @Autor: xzw
 * @Date: 2020-09-16 09:42:06
 * @LastEditors: xzw
 * @LastEditTime: 2020-09-16 09:58:49
 * @Description: 
 */

#include "bpm.h"

int32_t bpm_calculate(int32_t *loc,int32_t size)
{
    int32_t num,bpm;
	  num = size;
		
    switch (num)
    {
    case 2:
        bpm = 60.0/(loc[num-1]-loc[num-2])*204;                              //计算心率 算法:两峰之间点数*采样率
        break;
    
    case 3:
        bpm = 60.0/(((loc[num-1]-loc[num-2])+(loc[num-2]-loc[num-3]))/2)*204;
				//bpm = 60.0/(location[num-1]-location[num-2])*204;
        break;

    case 4:
        bpm = 60.0/(((loc[num-1]-loc[num-2])+(loc[num-2]-loc[num-3])+(loc[num-3]-loc[num-4]))/3)*204;
				//bpm = 60.0/(location[num-1]-location[num-2])*204;
        break;

    case 5:
        bpm = 60.0/(((loc[num-1]-loc[num-2])+(loc[num-2]-loc[num-3])+(loc[num-3]-loc[num-4])+(loc[num-4]-loc[num-5]))/4)*204;
				//bpm = 60.0/(location[num-1]-location[num-2])*204;
        break;

    case 6:
        bpm = 60.0/(((loc[num-1]-loc[num-2])+(loc[num-2]-loc[num-3])+(loc[num-3]-loc[num-4])+(loc[num-4]-loc[num-5])+(loc[num-5]-loc[num-6]))/5)*204;
				//bpm = 60.0/(location[num-1]-location[num-2])*204;
			 break;
    case 7:
        bpm = 60.0/(((loc[num-1]-loc[num-2])+(loc[num-2]-loc[num-3])+(loc[num-3]-loc[num-4])+(loc[num-4]-loc[num-5])+(loc[num-5]-loc[num-6])+(loc[num-6]-loc[num-7]))/6)*204;
				//bpm = 60.0/(location[num-1]-location[num-2])*204;
        break;
		case 8:
			  bpm = 60.0/(((loc[num-1]-loc[num-2])+(loc[num-2]-loc[num-3])+(loc[num-3]-loc[num-4])+(loc[num-4]-loc[num-5])+(loc[num-5]-loc[num-6])+(loc[num-6]-loc[num-7])+(loc[num-7]-loc[num-8]))/7)*204;
				//bpm = 60.0/(location[num-1]-location[num-2])*204;
        break;

    default: bpm = 60.0/(loc[num-1]-loc[num-2])*204;
        break;
    }
		
		//bpm = 60.0/(location[num-1]-location[num-2])*204;
    return bpm;
}





