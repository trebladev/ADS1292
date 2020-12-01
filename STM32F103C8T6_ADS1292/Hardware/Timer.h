#include "sys.h"  



extern u8	TIM3_keynum;//按键延时标志
extern u8 TIM2_IRQ_flag;
extern u8 TIM4_Timing;

void TIM2_Init(u16 arr,u16 psc);
void TIM3_Init(u16 arr,u16 psc);
void TIM4_Init(u16 arr,u16 psc);
void TIM5_Init(u16 arr,u16 psc);
void TIM6_Init(u16 arr,u16 psc);
void TIM7_Init(u16 arr,u16 psc);

