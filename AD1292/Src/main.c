/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "dma.h"
#include "spi.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
#include "AD1292.h"
#include "sys.h"
#include <stdio.h>
#include "USART_HMI.h"
#include "findpeaks.h"
#include "FIR_48.h"

extern UART_HandleTypeDef huart1;   //声明串口
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
s32 get_volt(u32 num);                 //把采到的3个字节补码转成有符号32位数
float32_t val1;
u32 val1_last;
float32_t calculate_cache[25];             //计算部分缓存
float32_t calculate_cache1[18];            //计算部分缓存
float32_t fir_put[25];                     //滤波输出数据 
int32_t val1_int;                          //心率数据int32格式
int32_t bpm_cache[1200];                   //计算心率的数据缓存

int32_t pn_npks;                           //峰值检测函数峰值数量
int32_t pn_locs[15];                       //峰值检测函数输出峰值点

float32_t a1;
float32_t b1;
float32_t val_init_data[Val_Init_Num];

static float bpm;                          //心率数值



/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
  static uint16_t j,n;
  uint8_t res,i,sum;	
	uint8_t data_to_send[60];//串口发送缓存
	uint8_t usbstatus=0;	
	u32 cannle[2];	//存储两个通道的数据
	s32	p_Temp[2];	//数据缓存
	
	
	data_to_send[0]=0xAA;
	data_to_send[1]=0xAA;
	data_to_send[2]=0xF1;	
	data_to_send[3]=8;
	
	int k;
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_SPI2_Init();
  //MX_TIM3_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */
  ADS1292_Init();
	HAL_Delay(10);
	while(Set_ADS1292_Collect(0))//0 正常采集  //1 1mV1Hz内部侧试信号 //2 内部短接噪声测试
		{	
				printf("1292寄存器设置失败\r\n");
		}	
		printf("寄存器设置成功\r\n");
		
	HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);                       //开启外部中断
		
	//HAL_TIM_Base_Start_IT(&htim3);                        //开启定时器3中断
	Get_val_init_data(val_init_data);
  ADS1292_val_init(val_init_data,&a1,&b1);
  /* USER CODE END 2 */
	arm_fir_init();
  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
		if(ads1292_recive_flag)
				{										
							cannle[0]=ads1292_Cache[3]<<16 | ads1292_Cache[4]<<8 | ads1292_Cache[5];//获取原始数据		
							cannle[1]=ads1292_Cache[6]<<16 | ads1292_Cache[7]<<8 | ads1292_Cache[8];
						
							p_Temp[0] = get_volt(cannle[0]);	//把采到的3个字节转成有符号32位数
							p_Temp[1] = get_volt(cannle[1]);	//把采到的3个字节转成有符号32位数
					
							//有符号数为再转为无符号，无符号数为逻辑右移
							cannle[0] = p_Temp[0];
							cannle[1]	= p_Temp[1];
              /*
							data_to_send[4]=cannle[0]>>24;		//25-32位
							data_to_send[5]=cannle[0]>>16;  	//17-24
							data_to_send[6]=cannle[0]>>8;		//9-16
							data_to_send[7]=cannle[0]; 			//1-8

							data_to_send[8]=cannle[1]>>24;		//25-32位
							data_to_send[9]=cannle[1]>>16;  	//17-24
							data_to_send[10]=cannle[1]>>8;		//9-16
							data_to_send[11]=cannle[1];			 //1-8
							
							for(i=0;i<12;i++)
									sum += data_to_send[i];							
							data_to_send[12] = sum;	//校验和		
              															
							HAL_UART_Transmit_DMA(&huart1,data_to_send,13);
							*/
							val1 = cannle[1]*(a1)+b1;                       //将数据改为能在串口屏显示的数值
              
              calculate_cache[j] = val1;                                //将数据存入滤波计算缓存数组中
							
							val1_int = (int32_t)val1;                                 //数据转换为int32格式
							
							bpm_cache[n] = val1_int;                                  //将数据存入心率计算数组中

              j++;
							
							n++;

              if(j == 25)
              {

                j=18;
                arm_fir_f32_lp_48(calculate_cache,fir_put);              //对数据进行FIR 48Hz低通滤波
								for(k=18;k<25;k++)
								{
									printf("add 3,0,%0.f",fir_put[k]);                     //向串口屏输出数据
									send_ending_flag();
								}
								
								arm_copy_f32(calculate_cache+7,calculate_cache1,18);     //将前一数组的后18位拷贝到缓存数组中，作为FIR滤波器的群延时
								
								arm_copy_f32(calculate_cache1,calculate_cache,18);       //将缓存数组的18位拷贝到后一数组中
								
								/*
								for(k=0;k<18;k++)
								{
									calculate_cache[k] = calculate_cache[k+7];
								}
								*/
                /*
                maxim_peaks_above_min_height(pn_locs,&pn_npks,calculate_cache,1200,200);

                //findPeaks(calculate_cache,2000,0,indMax,&peakFs_len,indMin,&peakFs2_len);
                bpm = 60.0/(pn_locs[pn_npks/2]-pn_locs[pn_npks/2-1])*500;
                printf("n0.val=%d",(int)bpm);
                send_ending_flag();
                */
              }
							if(n>1200)
							{
								n=0;
								maxim_peaks_above_min_height(pn_locs,&pn_npks,bpm_cache,1200,175);                   //寻找175以上的峰
								bpm = 60.0/(pn_locs[pn_npks-1]-pn_locs[pn_npks-2])*320;                              //计算心率 算法:两峰之间点数*采样率
								printf("n0.val=%d",(int)bpm);                                                        //输出心率数据
								send_ending_flag();
								
							}

							ads1292_recive_flag=0;
							sum = 0;	
							//HAL_Delay(10);
				}
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage 
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 168;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if((GPIO_Pin == GPIO_PIN_8) && (ADS_DRDY == 0))
  {
    PA8_IRQHandler();
  }
    

}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  if (htim == (&htim3))
  {
		/*
		static int i=18;
		i=i+5;
		if(i>1200)
		{
			i = 18;
		}
    printf("add 3,0,%0.f",fir_put[i]);
		send_ending_flag();
		*/
  }
}


/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
