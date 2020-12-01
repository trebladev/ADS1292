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

float32_t val_init_data[Val_Init_Num];     //���ʳ�ʼ������
float32_t breath_init_cache[Val_Init_Num]; //������ʼ������

float32_t a1,a2;                           //������ʾϵ��
float32_t b1,b2;                           //������ʾϵ��
float32_t mean;                            //��ֵ�˲����ֵ
float32_t mid_val;

static float bpm;                          //������ֵ
int32_t bpm_cache[1000];                   //�������ʵ����ݻ���
int32_t pn_npks;                           //���ʷ�ֵ��⺯����ֵ����
int32_t pn_locs[15];                       //���ʷ�ֵ��⺯�������ֵ��

float32_t val1;

float32_t calculate_cache[36];             //���㲿�ֻ���
float32_t calculate_cache1[18];            //���㲿�ֻ���
float32_t fir_put[36];                     //�˲��������
float32_t mid_filt_cache[midfilt_num];             //��ֵ�˲�����
float32_t mid_filt_cache1[midfilt_num];             //��ֵ�˲�����
int main()
{
		
		u8 res,i,sum;	
		volatile float val;
		volatile int test;
		static uint16_t j,n,num,x,mid_filt_num;
	  uint8_t data_to_send[60];//���ڷ��ͻ���
		uint8_t usbstatus=0;	
		u32 cannle[2];	//�洢����ͨ��������
		s32	p_Temp[2];	//���ݻ���
	
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
		
		while(Set_ADS1292_Collect(0))//0 �����ɼ�  //1 1mV1Hz�ڲ������ź� //2 �ڲ��̽���������
		{	
				printf("1292�Ĵ�������ʧ��\r\n");
		}	
		printf("�Ĵ������óɹ�\r\n");
		
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
								cannle[0]=ads1292_Cache[3]<<16 | ads1292_Cache[4]<<8 | ads1292_Cache[5];//��ȡԭʼ����		
								
								val = get_channel_1_val();
						
								val1 =val*(a1)+b1;                                //�����ݸ�Ϊ���ڴ�������ʾ����ֵ
						
								calculate_cache[j] = val1;                                //�����ݴ����˲����㻺��������
						
								j++;
						
								//z++;
						
								if(j == 19)
              {
								
                j=18;
                
								//arm_fir_f32_lp_5(breath_cache,fir_put1); 
								//arm_mean_f32(breath_cache);
								//printf("add 3,0,%0.f",val2); 
								//send_ending_flag();
								arm_fir_f32_lp_48(calculate_cache,fir_put);              //�����ݽ���FIR 48Hz��ͨ�˲�
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
											maxim_peaks_above_min_height(pn_locs,&pn_npks,bpm_cache,1000,140);                   //Ѱ��175���ϵķ�
											bpm = bpm_calculate(pn_locs,pn_npks);
											//bpm = 60.0/(pn_locs[pn_npks-1]-pn_locs[pn_npks-2])*204;                              //�������� �㷨:����֮�����*������
											printf("n0.val=%d",(int)bpm);                                                        //�����������
											send_ending_flag();
								
										}
										printf("add 2,0,%0.f",fir_put[0]-mid_val+100);
										send_ending_flag();
										arm_copy_f32(mid_filt_cache1,mid_filt_cache,midfilt_num);
									}
						   
									
									//printf("add 2,0,%0.f",fir_put[2*k]);                     //�򴮿����������
									//send_ending_flag();
									
								
								
								arm_copy_f32(calculate_cache+1,calculate_cache1,18);     //��ǰһ����ĺ�18λ���������������У���ΪFIR�˲�����Ⱥ��ʱ
								
								arm_copy_f32(calculate_cache1,calculate_cache,18);       //�����������18λ��������һ������
								
								
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

	

