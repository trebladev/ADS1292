#include <usart.h>


const eUSCI_UART_Config uartConfig =
{
        EUSCI_A_UART_CLOCKSOURCE_SMCLK,          // SMCLK Clock Source
        6,                                     // BRDIV = 78
        8,                                       // UCxBRF = 2
        0,                                       // UCxBRS = 0
        EUSCI_A_UART_NO_PARITY,                  // No Parity
        EUSCI_A_UART_LSB_FIRST,                  // LSB First
        EUSCI_A_UART_ONE_STOP_BIT,               // One stop bit
        EUSCI_A_UART_MODE,                       // UART mode
        EUSCI_A_UART_OVERSAMPLING_BAUDRATE_GENERATION,  // Oversampling
        //EUSCI_A_UART_8_BIT_LEN                  // 8 bit data length
};



void Usart_Init(void)
{
	MAP_GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P1,
            GPIO_PIN2 | GPIO_PIN3, GPIO_PRIMARY_MODULE_FUNCTION);
	
	//CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_12);
	
	MAP_UART_initModule(EUSCI_A0_BASE, &uartConfig);
	
	MAP_UART_enableModule(EUSCI_A0_BASE);
	
}



