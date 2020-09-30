#include <gpio_u.h>


void GPIO_Init(void)
{
	MAP_GPIO_setAsOutputPin(GPIO_PORT_P4, GPIO_PIN6);
		
	MAP_GPIO_setAsInputPinWithPullDownResistor(GPIO_PORT_P3, GPIO_PIN6);
  MAP_GPIO_clearInterruptFlag(GPIO_PORT_P3, GPIO_PIN6);
  MAP_GPIO_enableInterrupt(GPIO_PORT_P3, GPIO_PIN6);
  MAP_Interrupt_enableInterrupt(INT_PORT3);
	
	MAP_Interrupt_enableMaster(); 
}




