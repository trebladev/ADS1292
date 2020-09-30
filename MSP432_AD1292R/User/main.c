#include <driverlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <delay.h>
#include <sys.h>
#include <usart.h>
#include <arm_math.h>

uint8_t TXData = 2;

int main()
{
    volatile uint32_t ii;
		volatile uint32_t temp4;
    /* Halting the Watchdog */
    MAP_WDT_A_holdTimer();
		
		Msp432_Clock_Init();
	
		Usart_Init();

		FPU_enableModule();
    /* Configuring P1.0 as output */
    MAP_GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
	
		//temp4 = CS_getMCLK();
		
		delay_init(CS_getMCLK());

    while (1)
    {
        /* Delay Loop */
        delay_ms(1000);
			
				temp4 = CS_getSMCLK();

        MAP_GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
				printf("SMCLK=%d",temp4);
			
				//MAP_UART_transmitData(EUSCI_A0_BASE,TXData);
			
				

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

	

