#ifndef __DMA_H
#define	__DMA_H	   
#include "sys.h"


void DMA_Config(DMA_Channel_TypeDef* DMA_CHx,u32 cpar,u32 cmar);
void DMA_Enable(DMA_Channel_TypeDef*DMA_CHx,u16 len);
	   
#endif




