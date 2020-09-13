/*
 * @Author: xzw
 * @Date: 2020-09-08 14:28:29
 * @LastEditors: xzw
 * @LastEditTime: 2020-09-08 15:20:30
 * @Description: file content
 */
#include "FIR_48.h"
#include "sys.h"

uint32_t block_size = BLOCK_SIZE;
uint32_t numBlocks = LENGTH_SAMPLES/BLOCK_SIZE;

static float32_t firStateF32_48[BLOCK_SIZE+NUM_TAPS-1];
static float32_t firStateF32_5[BLOCK_SIZE+NUM_TAPS-1];

arm_fir_instance_f32 S;

const int BL5 = 29;
const float32_t B5[29] = {
   0.004708919674, 0.005489378236,  0.00766007416,  0.01117761619,  0.01591668092,
    0.02167543769,  0.02818588167,  0.03512848914,   0.0421503298,  0.04888555408,
    0.05497694388,  0.06009719148,  0.06396857649,  0.06637971848,  0.06719842553,
    0.06637971848,  0.06396857649,  0.06009719148,  0.05497694388,  0.04888555408,
     0.0421503298,  0.03512848914,  0.02818588167,  0.02167543769,  0.01591668092,
    0.01117761619,  0.00766007416, 0.005489378236, 0.004708919674
};

const int BL = 29;
const float32_t B[29] = {
   0.001506449888, 0.002234620508, 0.002710965928, 0.001793551724,-0.001998553053,
  -0.009054892696, -0.01725229621, -0.02160282992, -0.01561676059, 0.005884210579,
    0.04369464517,  0.09248118103,   0.1415220052,   0.1779729873,   0.1914494336,
     0.1779729873,   0.1415220052,  0.09248118103,  0.04369464517, 0.005884210579,
   -0.01561676059, -0.02160282992, -0.01725229621,-0.009054892696,-0.001998553053,
   0.001793551724, 0.002710965928, 0.002234620508, 0.001506449888
};

void arm_fir_f32_lp_48(float32_t *Input_buffer,float32_t *Output_buffer)
{
    uint32_t i;
    //arm_fir_instance_f32 S;
    float32_t *inputF32,*outputF32;

    inputF32 = Input_buffer;
    outputF32 = Output_buffer;

    //arm_fir_init_f32(&S,NUM_TAPS,(float32_t *)&B[0],&firStateF32_48[0],block_size);

    
    arm_fir_f32(&S,inputF32,outputF32,block_size);
    

}

void arm_fir48_init(void)
{
	arm_fir_init_f32(&S,NUM_TAPS,(float32_t *)&B[0],&firStateF32_48[0],block_size);
}

void arm_fir5_init(void)
{
	arm_fir_init_f32(&S,NUM_TAPS,(float32_t *)&B5[0],&firStateF32_5[0],block_size);
}


void arm_fir_f32_lp_5(float32_t *Input_buffer,float32_t *Output_buffer)
{
    uint32_t i;
    //arm_fir_instance_f32 S;
    float32_t *inputF32,*outputF32;

    inputF32 = Input_buffer;
    outputF32 = Output_buffer;

    //arm_fir_init_f32(&S,NUM_TAPS,(float32_t *)&B[0],&firStateF32[0],block_size);

    
    arm_fir_f32(&S,inputF32,outputF32,block_size);
    

}




