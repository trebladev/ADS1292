#include "Timer.h"
#include "led.h" 
#include "key.h"


//高级 TIM1 TIM8
//通用 TIM2 TIM3 TIM4 TIM5
//基本 TIM6 TIM7

//定时器5初始化
void TIM2_Init(u16 arr,u16 psc)
{
    TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
		NVIC_InitTypeDef NVIC_InitStructure;

		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE); //TIM5时钟使能 
	 
		TIM_TimeBaseStructure.TIM_Period = arr-1;; //设置在下一个更新事件装入活动的自动重装载寄存器周期的值	 
		TIM_TimeBaseStructure.TIM_Prescaler =psc-1; //设置用来作为TIMx时钟频率除数的预分频值 
		TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1; //设置时钟分割:TDTS = Tck_tim
		TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM向上计数模式
		TIM_TimeBaseInit(TIM2, &TIM_TimeBaseStructure); //根据TIM_TimeBaseInitStruct中指定的参数初始化TIMx的时间基数单位
	 
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);  //设置中断分组
		NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;  //TIM5中断
		NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 2;  //先占优先级
		NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;  //从优先级
		NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQ通道被使能
		NVIC_Init(&NVIC_InitStructure); 
		
		TIM_ClearITPendingBit(TIM2, TIM_IT_Update); //清除更新中断请求位
		TIM_ITConfig( TIM2, TIM_IT_Update, ENABLE );//TIM5 允许更新										
		TIM_Cmd(TIM2, ENABLE); 
}

void TIM2_IRQHandler(void)
{ 
		if(TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET)  //更新中断 
		{ 
				TIM_ClearITPendingBit(TIM2, TIM_IT_Update);//清中断标志
				DS3=!DS3;
		}				   
}




//定时器初始化
//蜂鸣器时长 +按键消抖
void TIM4_Init(u16 arr,u16 psc)
{
    TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
		NVIC_InitTypeDef NVIC_InitStructure;

		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE); //时钟使能 
	 
		TIM_TimeBaseStructure.TIM_Period = arr-1;; //设置在下一个更新事件装入活动的自动重装载寄存器周期的值	 
		TIM_TimeBaseStructure.TIM_Prescaler =psc-1; //设置用来作为TIMx时钟频率除数的预分频值 
		TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1; //设置时钟分割:TDTS = Tck_tim
		TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM向上计数模式
		TIM_TimeBaseInit(TIM4, &TIM_TimeBaseStructure); //根据TIM_TimeBaseInitStruct中指定的参数初始化TIMx的时间基数单位
	 
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);  //设置中断分组
		NVIC_InitStructure.NVIC_IRQChannel = TIM4_IRQn;  //TIM中断
		NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;  //先占优先级
		NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;  //从优先级
		NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQ通道被使能
		NVIC_Init(&NVIC_InitStructure); 
		
		TIM_ClearITPendingBit(TIM4, TIM_IT_Update); //清除更新中断请求位
		TIM_ITConfig(TIM4, TIM_IT_Update, ENABLE );//允许更新										
		TIM_Cmd(TIM4, ENABLE); 
}

//定时器中断服务程序	 
void TIM4_IRQHandler(void)
{ 
		if(TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET)  //更新中断 
		{ 
				TIM_ClearITPendingBit(TIM4, TIM_IT_Update);//清中断标志		
				EXTI->IMR |= EXTI_Line9;//使能外部中断
				TIM_Cmd(TIM4, DISABLE);
				TIM4->CNT=0;//清空定时器计数器
					
		}				   
}


//		TIM3->CNT=0;//清空定时器计数器
//		TIM3->ARR=arr;  	//设定计数器自动重装值//刚好1ms    
//		TIM3->PSC=psc;  	//预分频器7200,得到10Khz的计数时钟		  
//		TIM3->DIER|=1<<0;   //允许更新中断	  
//		TIM3->CR1|=0x01;    //使能定时器3






