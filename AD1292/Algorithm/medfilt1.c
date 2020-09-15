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
    float32_t *input;                           //��������
    float32_t mid_val;                                        //��λ��

		input = p_input;
	
    for(i=0;i<size-blocksize+1;i++)                                     
    {
        arm_copy_f32(input+i,mid_cache,blocksize);          //�����˲�����Ĵ���ֵ���뻺������

        //mid_val = find_mid_val(mid_cache,blocksize);          //�ҵ���λ��
			  maxim_sort_ascend(mid_cache,size);
			
			  mid_val = mid_cache[(size+1)/2];                  //�ҵ������������λ��

        //*(input+(2*i+1+blocksize)/2) = mid_val;             //����λ������ԭ�����м������
    }
	  return mid_val;
}




float32_t find_mid_val(float32_t *p_input,int size)
{
    float32_t mid_cache[size],*input;                        //���û�������
    float32_t mid_val;                                //�������λ��
	  input = p_input;
    arm_copy_f32(input,mid_cache,size);             //������������뻺��������
    maxim_sort_ascend(mid_cache,size);                //�Ի������������������

    mid_val = mid_cache[(size+1)/2];                  //�ҵ������������λ��

    return mid_val;

}







