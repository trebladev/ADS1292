#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"



#define KEY1  PBin(9)	

#define		SEND_UART		1 //���ڷ���
#define		SEND_USB			2 //3USB����

extern u8 work_state;		//����״̬

void KEY1_Init(void);	



#endif
