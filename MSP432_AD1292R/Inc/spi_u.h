#ifndef _SPI_U_H
#define _SPI_U_H

#include <driverlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <delay.h>
#include <sys.h>



void SPI_Init(void);

u8 SPI_ReadWriteByte(u8 TxData);




#endif


