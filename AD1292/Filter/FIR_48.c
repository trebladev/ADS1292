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

static float32_t firStateF32[BLOCK_SIZE+NUM_TAPS-1];

arm_fir_instance_f32 S;

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

    //arm_fir_init_f32(&S,NUM_TAPS,(float32_t *)&B[0],&firStateF32[0],block_size);

    
    arm_fir_f32(&S,inputF32,outputF32,block_size);
    

}

void arm_fir_init(void)
{
	arm_fir_init_f32(&S,NUM_TAPS,(float32_t *)&B[0],&firStateF32[0],block_size);
}



