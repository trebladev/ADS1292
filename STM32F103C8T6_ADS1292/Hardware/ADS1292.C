#include "ADS1292.h"
#include "spi.h"
#include "delay.h"
#include "usart.h"
#include "Timer.h"
#include "key.h"
#include "led.h"



 #define DEBUG_ADS1292	//寄存器printf调试


u8 ADS1292_REG[12];		//ads1292寄存器数组
ADS1292_CONFIG1 	Ads1292_Config1		={DATA_RATE};																				//CONFIG1
ADS1292_CONFIG2 	Ads1292_Config2		={PDB_LOFF_COMP,PDB_REFBUF,VREF,CLK_EN,INT_TEST};		//CONFIG2
ADS1292_CHSET 		Ads1292_Ch1set		={CNNNLE1_POWER,CNNNLE1_GAIN,CNNNLE1_MUX};					//CH1SET
ADS1292_CHSET 		Ads1292_Ch2set		={CNNNLE2_POWER,CNNNLE2_GAIN,CNNNLE2_MUX};					//CH2SET
ADS1292_RLD_SENS	Ads1292_Rld_Sens	={PDB_RLD,RLD_LOFF_SENSE,RLD2N,RLD2P,RLD1N,RLD1P};	//RLD_SENS
ADS1292_LOFF_SENS	Ads1292_Loff_Sens	={FLIP2,FLIP1,LOFF2N,LOFF2P,LOFF1N,LOFF1P};					//LOFF_SENS
ADS1292_RESP1			Ads1292_Resp1			={RESP_DEMOD_EN1,RESP_MOD_EN,RESP_PH,RESP_CTRL};		//RSP1
ADS1292_RESP2			Ads1292_Resp2			={CALIB,FREQ,RLDREF_INT};														//RSP2

float32_t max_init_val;
uint32_t maxIndex;
float32_t min_init_val;
uint32_t minIndex;

//ADS1292的IO口初始化	
void ADS1292_Init(void) 
{		
		GPIO_InitTypeDef 	GPIO_InitStructure;	
		EXTI_InitTypeDef 	EXTI_InitStructure;
		NVIC_InitTypeDef	NVIC_InitStructure;
	
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA |RCC_APB2Periph_GPIOB|RCC_APB2Periph_AFIO, ENABLE); 	 
		SPI2_Init();//初始化SPI引脚	
									//250ns 频率4.5M	发送八组时钟需要23 us	
									//125ns 频率9M，		发送八组时钟需要14 us	
									//55ns 频率18M		发送八组时钟需要9.2us
									//30ns 36M				发送八组时钟需要9.2us
									//手册10页里写的最小时钟周期为50ns			
		//DRDY	//待机时高电平，采集时低电平有效
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//上拉输入
		GPIO_Init(GPIOA, &GPIO_InitStructure);		
		//CS
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;//推挽输出
		GPIO_Init(GPIOB, &GPIO_InitStructure);	
		
//		//RESRT
//		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
//		GPIO_Init(GPIOA, &GPIO_InitStructure);	
//		//START
//		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
//		GPIO_Init(GPIOA, &GPIO_InitStructure);	
//		//CLKSEL
//		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
//		GPIO_Init(GPIOA, &GPIO_InitStructure);		


		//DRDY中断初始化
	  EXTI_ClearITPendingBit(EXTI_Line8);//清除中断标志
  	GPIO_EXTILineConfig(GPIO_PortSourceGPIOA,GPIO_PinSource8);//选择管脚
  	EXTI_InitStructure.EXTI_Line=EXTI_Line8;						 //选择中断线路
  	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;	 //设置为中断请求，非事件请求
  	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //下降沿触发
  	EXTI_InitStructure.EXTI_LineCmd = ENABLE;						 //外部中断使能
  	EXTI_Init(&EXTI_InitStructure);	 
		
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
  	NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;					//选择中断通道
  	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;	//抢占优先级 
  	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;				//子优先级
  	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;						//使能外部中断通道
  	NVIC_Init(&NVIC_InitStructure); 
		
		EXTI->IMR &= ~(EXTI_Line8);//屏蔽外部中断	
		ADS_CS=1;		
		ADS1292_PowerOnInit();//上电复位，进入待机模式	
}

volatile u8 ads1292_recive_flag=0;	//数据读取完成标志
volatile u8 ads1292_Cache[9];	//数据缓冲区


void EXTI9_5_IRQHandler(void)
{
	
		if(EXTI->IMR&EXTI_Line8 && ADS_DRDY==0)//数据接收中断				
		{		
				EXTI_ClearITPendingBit(EXTI_Line8); 	
				ADS1292_Read_Data(ads1292_Cache);//数据存到9字节缓冲区
				ads1292_recive_flag=1;
		}	
}



//读取72位的数据1100+LOFF_STAT[4:0]+GPIO[1:0]+13个0+2CHx24位，共9字节
//	1100	LOFF_STAT[4			3			2			1			0	]	//导联脱落相关的信息在LOFF_STAT寄存器里
//									RLD		1N2N	1N2P	1N1N	1N1P	
//	例	C0 00 00 FF E1 1A FF E1 52	

u8 ADS1292_Read_Data(u8 *data)//72M时钟下函数耗时大约10us  8M时钟下 函数耗时大约 100us
{		
		u8 i;	
		
		ADS_CS=0;//读9个字节的数据
		//delay_us(10);
		for(i=0;i<9;i++)
		{	
				*data=ADS1292_SPI(0X00);	
				data++;
		}
		//delay_us(10);
		ADS_CS=1;		
		return 0;
}


//设置寄存器数组
void ADS1292_SET_REGBUFF(void)
{
	ADS1292_REG[ID] =	ADS1292_DEVICE;//ID只读
	 
	ADS1292_REG[CONFIG1] =	0x00;		//0000 0aaa	[7] 0连续转换模式  [6:3] 必须为0 
	ADS1292_REG[CONFIG1] |=	Ads1292_Config1.Data_Rate;//[2:0] aaa 采样率设置采样率

	ADS1292_REG[CONFIG2] =	0x00;		//1abc d0e1	[7] 必须为1  [2] 必须为0  [0] 设置测试信号为1HZ、±1mV方波 
	ADS1292_REG[CONFIG2] |=	Ads1292_Config2.Pdb_Loff_Comp<<6;	//[6]a 导联脱落比较器是否掉电
	ADS1292_REG[CONFIG2] |=	Ads1292_Config2.Pdb_Refbuf<<5;		//[5]b 内部参考缓冲器是否掉电
	ADS1292_REG[CONFIG2] |=	Ads1292_Config2.Vref<<4;					//[4]c 内部参考电压设置，默认2.42V
	ADS1292_REG[CONFIG2] |=	Ads1292_Config2.Clk_EN<<3;				//[3]d CLK引脚输出时钟脉冲？
	ADS1292_REG[CONFIG2] |=	Ads1292_Config2.Int_Test<<1;			//[1]e 是否打开内部测试信号,
	ADS1292_REG[CONFIG2] |=	0x81;//设置默认位
	
	ADS1292_REG[LOFF] =	0x10;//[7:5]	设置导联脱落比较器阈值 [4]	必须为1 		[3:2] 导联脱落电流幅值		[1]	必须为0	[0]	导联脱落检测方式 0 DC 1 AC 

	ADS1292_REG[CH1SET] =	0x00;	 //abbb cccc
	ADS1292_REG[CH1SET] |=Ads1292_Ch1set.PD<<7;		//[7]  a 		通道1断电？
	ADS1292_REG[CH1SET] |=Ads1292_Ch1set.GAIN<<4;	//[6:4]bbb	设置PGA增益
	ADS1292_REG[CH1SET] |=Ads1292_Ch1set.MUX;			//[3:0]cccc	设置通道1输入方式

	ADS1292_REG[CH2SET] =	0x00;	//abbb cccc
	ADS1292_REG[CH2SET] |=Ads1292_Ch2set.PD<<7;		//[7]  a 		通道2断电？
	ADS1292_REG[CH2SET] |=Ads1292_Ch2set.GAIN<<4;	//[6:4]bbb	设置PGA增益
	ADS1292_REG[CH2SET] |=Ads1292_Ch2set.MUX;			//[3:0]cccc	设置通道2输入方式
	
	ADS1292_REG[RLD_SENS] = 0X00; //11ab cdef	[7:6] 11 PGA斩波频率	fMOD/4 
	ADS1292_REG[RLD_SENS] |=Ads1292_Rld_Sens.Pdb_Rld<<5;					//[5]a	该位决定RLD缓冲电源状态
	ADS1292_REG[RLD_SENS] |=Ads1292_Rld_Sens.Rld_Loff_Sense<<4;	//[4]b	该位使能RLD导联脱落检测功能
	ADS1292_REG[RLD_SENS] |=Ads1292_Rld_Sens.Rld2N<<3;						//[3]c	这个位控制通道2负输入	用于右腿驱动的输出
	ADS1292_REG[RLD_SENS] |=Ads1292_Rld_Sens.Rld2P<<2;						//[2]d	该位控制通道2正输入		用于右腿驱动的输出
	ADS1292_REG[RLD_SENS] |=Ads1292_Rld_Sens.Rld1N<<1;						//[1]e	这个位控制通道1负输入	用于右腿驱动的输出
	ADS1292_REG[RLD_SENS] |=Ads1292_Rld_Sens.Rld1P;							//[0]f	该位控制通道1正输入		用于右腿驱动的输出	
	ADS1292_REG[RLD_SENS] |=	0xc0;//设置默认位

	ADS1292_REG[LOFF_SENS] = 0X00;  //00ab cdef	[7:6] 必须为0
	ADS1292_REG[LOFF_SENS] |=Ads1292_Loff_Sens.Flip2<<5;		//[5]a	这个位用于控制导联脱落检测通道2的电流的方向
	ADS1292_REG[LOFF_SENS] |=Ads1292_Loff_Sens.Flip1<<4;		//[4]b	这个位控制用于导联脱落检测通道1的电流的方向
	ADS1292_REG[LOFF_SENS] |=Ads1292_Loff_Sens.Loff2N<<3;	//[3]c	该位控制通道2负输入端的导联脱落检测
	ADS1292_REG[LOFF_SENS] |=Ads1292_Loff_Sens.Loff2P<<2;	//[2]d	该位控制通道2正输入端的导联脱落检测
	ADS1292_REG[LOFF_SENS] |=Ads1292_Loff_Sens.Loff1N<<1;	//[1]e	该位控制通道1负输入端的导联脱落检测
	ADS1292_REG[LOFF_SENS] |=Ads1292_Loff_Sens.Loff1P;			//[0]f	该位控制通道1正输入端的导联脱落检测
	
	ADS1292_REG[LOFF_STAT] =	0x00;		//[6]0 设置fCLK和fMOD之间的模分频比 fCLK=fMOD/4  [4:0]只读，导联脱落和电极连接状态
	
	ADS1292_REG[RESP1] = 0X00;//abcc cc1d
	ADS1292_REG[RESP1] |=Ads1292_Resp1.RESP_DemodEN<<7;//[7]a		这个位启用和禁用通道1上的解调电路		
	ADS1292_REG[RESP1] |=Ads1292_Resp1.RESP_modEN<<6;	//[6]b		这个位启用和禁用通道1上的调制电路	
	ADS1292_REG[RESP1] |=Ads1292_Resp1.RESP_ph<<2;			//[5:2]c	这些位控制呼吸解调控制信号的相位	
	ADS1292_REG[RESP1] |=Ads1292_Resp1.RESP_Ctrl;			//[0]d		这个位设置呼吸回路的模式
	ADS1292_REG[RESP1] |=	0x02;//设置默认位	
	
	ADS1292_REG[RESP2] = 0x00; //a000 0bc1	[6:3]必须为0 [0]必须为1
	ADS1292_REG[RESP2] |=	Ads1292_Resp2.Calib<<7;				//[7]a 启动通道偏移校正？
	ADS1292_REG[RESP2] |=	Ads1292_Resp2.freq<<2;				//[2]b 呼吸频率设置
	ADS1292_REG[RESP2] |=	Ads1292_Resp2.Rldref_Int<<1;	//[1]c RLDREF信号源外部馈电？
	ADS1292_REG[RESP2] |= 0X01;//设置默认位	
 
	ADS1292_REG[GPIO] =	0x0C;			//GPIO设为输入		[7:4]必须为0	 [3:2]11 GPIO为输入 [1:0] 设置输入时，指示引脚电平，设置输出时控制引脚电平
}

//通过SPI总线与ADS1292通信
u8 ADS1292_SPI(u8 com)
{	
		return SPI2_ReadWriteByte(com);
}
//写命令
void ADS1292_Send_CMD(u8 data)
{
		ADS_CS=0;
		delay_us(100);
		ADS1292_SPI(data);		
		delay_us(100);	
		ADS_CS=1;
}


/*ADS1291、ADS1292和ADS1292R串行接口以字节形式解码命令，需要4个tCLK周期来解码和执行.
因此，在发送多字节命令时，4 tCLK周期必须将一个字节(或操作码)的结束与下一个字节(或操作码)分开。
假设CLK（时钟）为512 kHz，则tSDECODE (4 tCLK)为7.8125 us。
当SCLK（数据速率）为16mhz时，一个字节可以在500ns中传输，此字节传输时间不符合tSDECODE规范;
因此，必须插入一个延迟，以便第二个字节的末尾晚于7.3125us到达。
如果SCLK为1 MHz，则在8u秒内传输一个字节。由于此传输时间超过tSDECODE规范，处理器可以不延迟地发送后续字节。
在后面的场景中，可以对串行端口进行编程，使其从每个循环的单字节传输转移到多个字节*/

//读写多个寄存器
void ADS1292_WR_REGS(u8 reg,u8 len,u8 *data)
{
		u8 i;
		ADS_CS=0;	
		delay_us(100);
		ADS1292_SPI(reg);
		delay_us(100);
		ADS1292_SPI(len-1);
		if(reg&0x40) //写
		{
				for(i=0;i<len;i++)
				{
						delay_us(100);		
						ADS1292_SPI(*data);
						data++;				
				}			
		}
		else //读		
		{
				for(i=0;i<len;i++)
				{
						delay_us(100);		
						*data = ADS1292_SPI(0);
						data++;
				}
		}			
		delay_us(100);	
		ADS_CS=1;
}


//寄存器数组写入寄存器
u8 ADS1292_WRITE_REGBUFF(void)
{
		u8 i,res=0;
		u8 REG_Cache[12];	//存储寄存器数据
		ADS1292_SET_REGBUFF();//设置寄存器数组		
		ADS1292_WR_REGS(WREG|CONFIG1,11,ADS1292_REG+1);//数组变量写入寄存器
		delay_ms(10);		
		ADS1292_WR_REGS(RREG|ID,12,REG_Cache);//读寄存器
		delay_ms(10);	
		
	#ifdef DEBUG_ADS1292	
		printf("WRITE REG:\r\n");
		for(i=0;i<12;i++	)//要写的数据								
				printf("%d %x\r\n",i,ADS1292_REG[i]);	
		printf("READ REG:\r\n");
	#endif	
	
	
		for(i=0;i<12;i++	)	//检查寄存器	
		{						
				if(ADS1292_REG[i] != REG_Cache[i])
				{
						if(i!= 0 && i!=8 && i != 11)	//0 8 和11是ID 导联脱落和GPIO相关
								res=1;
						else
								continue;
				}					
			#ifdef DEBUG_ADS1292
				printf("%d %x\r\n",i,REG_Cache[i]); //读到的数据			
			#endif
		}	

		#ifdef DEBUG_ADS1292	
			if(res == 0)
					printf("REG write success\r\n");
			else		
					printf("REG write err\r\n");
		#endif
		return res;				
}


void ADS1292_PowerOnInit(void)
{	
		u8 i;
		u8 REG_Cache[12];	
	
//		ADS_CLKSEL=1;//启用内部时钟
//		ADS_START=0; //停止数据输出	
//		ADS_RESET=0; //复位
//		delay_ms(1000);
//		ADS_RESET=1;//芯片上电，可以使用	
//		delay_ms(100);	//等待稳定
	
		ADS1292_Send_CMD(SDATAC);//发送停止连续读取数据命令
		delay_ms(100);	
		ADS1292_Send_CMD(RESET);//复位
		delay_s(1);		
		ADS1292_Send_CMD(SDATAC);//发送停止连续读取数据命令
		delay_ms(100);		
	
#ifdef DEBUG_ADS1292	
		ADS1292_WR_REGS(RREG|ID,12,REG_Cache);
		printf("read default REG:\r\n");
		for(i=0;i<12;i++	)	//读默认寄存器
				printf("%d %x\r\n",i,REG_Cache[i]);		
#endif
		//ADS1292_Send_CMD(STANDBY);//进入待机模式	
}



//设置通道1内部1mV测试信号
u8 ADS1292_Single_Test(void) //注意1292R开了呼吸解调，会对通道一的内部测试信号波形造成影响，这里只参考通道2即可，1292不受影响
{
		u8 res=0;
		Ads1292_Config2.Int_Test = INT_TEST_ON;//打开内部测试信号
		Ads1292_Ch1set.MUX=MUX_Test_signal;//测试信号输入	
		Ads1292_Ch2set.MUX=MUX_Test_signal;//测试信号输入	
		
		if(ADS1292_WRITE_REGBUFF())//写入寄存器
				res=1;	
		delay_ms(10);			
		return res;		
}
//设置内部噪声测试
u8 ADS1292_Noise_Test(void)
{
		u8 res=0;
		Ads1292_Config2.Int_Test = INT_TEST_OFF;//关内部测试信号
		Ads1292_Ch1set.MUX = MUX_input_shorted;//输入短路	
		Ads1292_Ch2set.MUX = MUX_input_shorted;//输入短路	

		if(ADS1292_WRITE_REGBUFF())//写入寄存器
				res=1;	
		delay_ms(10);			
		return res;			
}

//正常信号采集模式
u8 ADS1292_Single_Read(void)
{
		u8 res=0;
		Ads1292_Config2.Int_Test = INT_TEST_OFF;//关内部测试信号
		Ads1292_Ch1set.MUX = MUX_Normal_input;//普通电极输入
		Ads1292_Ch2set.MUX = MUX_Normal_input;//普通电极输入
	
		if(ADS1292_WRITE_REGBUFF())//写入寄存器
				res=1;
		delay_ms(10);		
		return res;		
}	

//配置ads1292采集方式
u8 Set_ADS1292_Collect(u8 mode)
{
		u8 res;
		
		delay_ms(10);	
		switch(mode)//设置采集方式
		{
				case 0:
					res =ADS1292_Single_Read();												
				break;
				case 1:
					res =ADS1292_Single_Test();											
				break;
				case 2:
					res =ADS1292_Noise_Test();											
				break;
		}		
		if(res)return 1;//寄存器设置失败		
		ADS1292_Send_CMD(RDATAC); //启动连续模式
		delay_ms(10);		
		ADS1292_Send_CMD(START);	//发送开始数据转换（等效于拉高START引脚）	
		delay_ms(10);		
		return 0;
}

//计算系数值
void ADS1292_val_init(float32_t *data,float32_t *a,float32_t *b)
{
	float32_t *data_cache,*a1,*b1;

	data_cache = data;

	a1 = a;

	b1 = b;

	arm_max_f32(data_cache,Val_Init_Num,&max_init_val,&maxIndex);

	arm_min_f32(data_cache,Val_Init_Num,&min_init_val,&minIndex);

	*a1 = 180.0/(max_init_val-min_init_val);

	*b1 = 220-(*a1)*max_init_val;

}

//获取初始化数据
void Get_val_init_data(float32_t *data,float32_t *data2)
{
	u32 cannle1,cannle0;
	s32 p_Temp1,p_Temp0;
	static int f,i;
	while(f<Val_Init_Num)
	{
		if(ads1292_recive_flag)
		{
			cannle0=ads1292_Cache[3]<<16 | ads1292_Cache[4]<<8 | ads1292_Cache[5];
			cannle1=ads1292_Cache[6]<<16 | ads1292_Cache[7]<<8 | ads1292_Cache[8];

			p_Temp1 = get_volt(cannle1);
			p_Temp0 = get_volt(cannle0);

			cannle1 = p_Temp1;
			cannle0 = p_Temp0;

			*(data+i) = cannle1;
			*(data2+i) = cannle0;
			
			f++;
			
			i++;

			ads1292_recive_flag=0;	
		}
	}
	
}


s32 get_volt(u32 num)
{		
			s32 temp;			
			temp = num;
			temp <<= 8;
			temp >>= 8;
			return temp;
}



