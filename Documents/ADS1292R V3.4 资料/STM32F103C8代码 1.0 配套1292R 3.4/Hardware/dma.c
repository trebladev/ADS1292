#include "dma.h"
#include "delay.h"       //延时




  
//DMA的各通道配置
//这里的传输形式是固定的,这点要根据不同的情况来修改
//从存储器->外设模式/8位数据宽度/存储器增量模式
//DMA_CHx:DMA通道CHx
//cpar:外设地址
//cmar:内存地址
void DMA_Config(DMA_Channel_TypeDef* DMA_CHx,u32 cpar,u32 cmar)
{
		NVIC_InitTypeDef NVIC_InitStructure;
	
		RCC->AHBENR |= 1<<0;				//开启DMA1时钟		
		delay_ms(10);
	
		//DMA_CHx -> CNDTR = len;	//数据传输量最大65535
		DMA_CHx -> CPAR = (u32)cpar;    //设定外设寄存器地址 发送地址
		DMA_CHx -> CMAR = (u32)cmar;    //设定数据存储器地址 接收地址
		
		//CCR	寄存器 0-14为设置位		
		DMA_CHx -> CCR  = 0;  							//复位，清零寄存器
		
		//被屏蔽的中断，在中断函数中不要判断其标志位，不然会触发，不清楚原因
		DMA_CHx -> CCR  	|= 0<<1;         //传输完成中断				1允许 0禁止
		DMA_CHx -> CCR  	|= 0<<2;         //半传输中断 				1允许 0禁止
		DMA_CHx -> CCR		|= 0<<3;         //允许传输错误中断		1允许 0禁止	  读写一个保留的地址区域,将会产生DMA传输错误 
	
		//设定数据传输方向
		DMA_CHx -> CCR  |= 1<<4;           //设定数据传输方向   0：从外设传输至内存 1：从内存传输至外设
		DMA_CHx -> CCR  |= 0<<5;           //0：不执行循环操作 1：执行循环操作           
		//设定外设和存储器地址增量
		DMA_CHx -> CCR  |= 0<<6;           //0：外设地址不自增 1：外设地址自增
		DMA_CHx -> CCR  |= 1<<7;           //0：内存地址不自增 1：内存地址自增    
		//设定外设数据宽度
		DMA_CHx -> CCR  |= 0<<8;           //外设数据宽度,由[9:8]两位控制
		DMA_CHx -> CCR  |= 0<<9;           //00：8位 01：16位 10：32位 11：保留  
		//设定存储数据宽度
		DMA_CHx -> CCR  |= 0<<10;          //存储器数据宽度,由[11:10]两位控制
		DMA_CHx -> CCR  |= 0<<11;          //00：8位 01：16位 10：32位 11：保留  			
		//设定为中等优先级
		DMA_CHx -> CCR  |= 0<<12;          //通道优先级,由[13:12]两位控制
		DMA_CHx -> CCR  |= 0<<13;          //00：低 01：中 10：高 11：最高 
		//存储方式
		DMA_CHx -> CCR  |= 0<<14;          //0：非内存到内存； 1：内存传输到内存。     

} 

//开启一次DMA传输
void DMA_Enable(DMA_Channel_TypeDef*DMA_CHx,u16 len)
{
		DMA_CHx -> CCR &= ~(1<<0);			//关闭当前的DMA传输（不管有没有传输完成）
    DMA_CHx -> CNDTR = len;			//设置数据传输量
    DMA_CHx -> CCR |= 1<<0;				//开始DMA传输  
}

 







