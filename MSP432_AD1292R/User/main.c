#include <driverlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <delay.h>
#include <sys.h>
#include <usart.h>

uint8_t TXData = 10;

int main()
{
    volatile uint32_t ii;
		volatile uint32_t temp4;
    /* Halting the Watchdog */
    MAP_WDT_A_holdTimer();
		
		Msp432_Clock_Init();
	
		Usart_Init();

    /* Configuring P1.0 as output */
    MAP_GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
	
		//temp4 = CS_getMCLK();
		
		delay_init(CS_getMCLK());

    while (1)
    {
        /* Delay Loop */
        delay_ms(1000);
			
				temp4 = CS_getMCLK();

        MAP_GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
			
				MAP_UART_transmitData(EUSCI_A0_BASE,TXData);
			
				

    }
}

	

