/*
 * delay.h
 *
 *  Created on: 2016��1��29��
 *      Author: Mike
 */

#ifndef delay_delay_H
#define delay_delay_H

#include <sys.h>

void delay_init(uint32_t SystemCoreClock);
void delay_us(uint32_t nus);
void delay_ms(uint16_t nms);


#endif /* SYS_DELAY_H_ */
