#include "delay.h"


void delay_us(uint32_t udelay)
{
	uint32_t startval,tickn,delays,wait;
 
  startval = SysTick->VAL;
  tickn = HAL_GetTick();
	
	delays =udelay * 84;
	
	if(delays > startval)
    {
      while(HAL_GetTick() == tickn)
        {
 
        }
      wait = 84000 + startval - delays;
      while(wait < SysTick->VAL)
        {
 
        }
    }
  else
    {
      wait = startval - delays;
      while(wait < SysTick->VAL && HAL_GetTick() == tickn)
        {
 
        }
    }

}

