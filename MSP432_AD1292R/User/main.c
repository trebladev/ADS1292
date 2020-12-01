#include <driverlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <delay.h>
#include <sys.h>
#include <usart.h>
#include <arm_math.h>
#include <gpio_u.h>
#include <AD1292.h>
#include <spi_u.h>
#include <bpm.h>
#include <findpeaks.h>
#include <medfilt1.h>
#include <FIR_48.h>
#include <USART_HMI.h>


static int mid_filt_start_flag;

float32_t val_init_data[Val_Init_Num];     //心率初始化数组
float32_t breath_init_cache[Val_Init_Num]; //呼吸初始化数组

float32_t a1,a2;                           //心率显示系数
float32_t b1,b2;                           //呼吸显示系数
float32_t mean;                            //均值滤波输出值
float32_t mid_val;

static float bpm;                          //心率数值
int32_t bpm_cache[1000];                   //计算心率的数据缓存
int32_t pn_npks;                           //心率峰值检测函数峰值数量
int32_t pn_locs[15];                       //心率峰值检测函数输出峰值点

float32_t val1;

float32_t calculate_cache[36];             //计算部分缓存
float32_t calculate_cache1[18];            //计算部分缓存
float32_t fir_put[36];                     //滤波输出数据
float32_t mid_filt_cache[midfilt_num];             //中值滤波缓存
float32_t mid_filt_cache1[midfilt_num];             //中值滤波缓存
int main()
{
		
		u8 res,i,sum;	
		volatile float val;
		volatile int test;
		static uint16_t j,n,num,x,mid_filt_num;
	  uint8_t data_to_send[60];//串口发送缓存
		uint8_t usbstatus=0;	
		u32 cannle[2];	//存储两个通道的数据
		s32	p_Temp[2];	//数据缓存
	
		/*
	  data_to_send[0]=0xAA;
	  data_to_send[1]=0xAA;
	  data_to_send[2]=0xF1;	
	  data_to_send[3]=8;
		*/
	
    volatile uint32_t ii;
		volatile uint32_t temp4;
    /* Halting the Watchdog */
    MAP_WDT_A_holdTimer();
		
		Msp432_Clock_Init();
		
		
		Usart_Init();
		
	

		FPU_enableModule();
    /* Configuring P1.0 as output */
    //MAP_GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
		
	  //MAP_GPIO_setAsInputPinWithPullUpResistor(GPIO_PORT_P1, GPIO_PIN1);
    //MAP_GPIO_clearInterruptFlag(GPIO_PORT_P1, GPIO_PIN1);
    //MAP_GPIO_enableInterrupt(GPIO_PORT_P1, GPIO_PIN1);
    //MAP_Interrupt_enableInterrupt(INT_PORT1);
	
		//temp4 = CS_getMCLK();
		//MAP_Interrupt_enableMaster(); 
		
		GPIO_Init();
		
		SPI_Init();
		
		delay_init(CS_getMCLK());
		
		ADS1292_Init();
		
		arm_fir48_init();
		
		while(Set_ADS1292_Collect(0))//0 正常采集  //1 1mV1Hz内部侧试信号 //2 内部短接噪声测试
		{	
				printf("1292寄存器设置失败\r\n");
		}	
		printf("寄存器设置成功\r\n");
		
		MAP_GPIO_enableInterrupt(GPIO_PORT_P3,GPIO_PIN6);

		Get_val_init_data(val_init_data,breath_init_cache);
		
		ADS1292_val_init(val_init_data,&a1,&b1);
		
    while (1)
    {
        /* Delay Loop */
        //delay_ms(1000);
			
				//temp4 = CS_getSMCLK();

        //MAP_GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
				//printf("SMCLK=%d",temp4);
			
				//MAP_UART_transmitData(EUSCI_A0_BASE,TXData);
				if(ads1292_recive_flag)
					{										
								cannle[0]=ads1292_Cache[3]<<16 | ads1292_Cache[4]<<8 | ads1292_Cache[5];//获取原始数据		
								
								val = get_channel_1_val();
						
								val1 =val*(a1)+b1;                                //将数据改为能在串口屏显示的数值
						
								calculate_cache[j] = val1;                                //将数据存入滤波计算缓存数组中
						
								j++;
						
								//z++;
						
								if(j == 19)
              {
								
                j=18;
                
								//arm_fir_f32_lp_5(breath_cache,fir_put1); 
								//arm_mean_f32(breath_cache);
								//printf("add 3,0,%0.f",val2); 
								//send_ending_flag();
								arm_fir_f32_lp_48(calculate_cache,fir_put);              //对数据进行FIR 48Hz低通滤波
								//draw_curve(last_val,600-fir_put[0],"GREEN");
									if(mid_filt_start_flag == 0)
									{
										mid_filt_cache[mid_filt_num] = fir_put[0];
										mid_filt_num++;
										if(mid_filt_num == midfilt_num)
										{
											mid_filt_start_flag = 1;
										}
									}
									else if(mid_filt_start_flag == 1)
									{
										arm_copy_f32(mid_filt_cache+1,mid_filt_cache1,midfilt_num-1);
										mid_filt_cache1[midfilt_num-1] = fir_put[0];
										mid_val=midfilt1(mid_filt_cache1,midfilt_num,midfilt_num);
										
										bpm_cache[n] = (fir_put[0]-mid_val+100);
										n++;
										if(n>600)
										{
											n=0;
											maxim_peaks_above_min_height(pn_locs,&pn_npks,bpm_cache,1000,140);                   //寻找175以上的峰
											bpm = bpm_calculate(pn_locs,pn_npks);
											//bpm = 60.0/(pn_locs[pn_npks-1]-pn_locs[pn_npks-2])*204;                              //计算心率 算法:两峰之间点数*采样率
											printf("n0.val=%d",(int)bpm);                                                        //输出心率数据
											send_ending_flag();
								
										}
										printf("add 2,0,%0.f",fir_put[0]-mid_val+100);
										send_ending_flag();
										arm_copy_f32(mid_filt_cache1,mid_filt_cache,midfilt_num);
									}
						   
									
									//printf("add 2,0,%0.f",fir_put[2*k]);                     //向串口屏输出数据
									//send_ending_flag();
									
								
								
								arm_copy_f32(calculate_cache+1,calculate_cache1,18);     //将前一数组的后18位拷贝到缓存数组中，作为FIR滤波器的群延时
								
								arm_copy_f32(calculate_cache1,calculate_cache,18);       //将缓存数组的18位拷贝到后一数组中
								
								
              }
								
								//printf("%f\r\n",val);
								//printf("add 2,0,%0.f",val1);
								//send_ending_flag();
								ads1292_recive_flag=0;
								sum = 0;	
				}
		}		
			

    }


int  fputc(int _c, register FILE *_fp)
{
    MAP_UART_transmitData(EUSCI_A0_BASE,(uint8_t)_c);
     while (!MAP_UART_getInterruptStatus(EUSCI_A0_BASE,
                                        EUSCI_A_UART_TRANSMIT_INTERRUPT_FLAG));
     EUSCI_A_CMSIS(EUSCI_A0_BASE)->IFG |= (EUSCI_A_UART_TRANSMIT_INTERRUPT_FLAG);
    return _c;
}

int  fputs(const char *_ptr, register FILE *_fp)
{
	uint16_t i, len;
	len = strlen(_ptr);
	for(i=0; i<len; i++)
	{
		MAP_UART_transmitData( EUSCI_A0_BASE , (unsigned char)_ptr[i] );
		while (!MAP_UART_getInterruptStatus(EUSCI_A0_BASE,EUSCI_A_UART_TRANSMIT_INTERRUPT_FLAG));
		EUSCI_A_CMSIS(EUSCI_A0_BASE)->IFG |= (EUSCI_A_UART_TRANSMIT_INTERRUPT_FLAG);
	}
    return len;

}

/* GPIO ISR */
void PORT3_IRQHandler(void)
{
    uint32_t status;

    status = MAP_GPIO_getEnabledInterruptStatus(GPIO_PORT_P3);
    MAP_GPIO_clearInterruptFlag(GPIO_PORT_P3, status);

    /* Toggling the output on the LED */
    if(status == GPIO_PIN6)
    {
        PA8_IRQHandler();//MAP_GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
    }

}

	

