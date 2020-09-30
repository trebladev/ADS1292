#include <spi_u.h>

const eUSCI_SPI_MasterConfig spiMasterConfig =
{
        EUSCI_B_SPI_CLOCKSOURCE_SMCLK,             // SMCLK Clock Source
        12000000,                                   // SMCLK = DCO = 3MHZ
        4000000,                                    // SPICLK = 500khz
        EUSCI_B_SPI_MSB_FIRST,                     // MSB First
        EUSCI_B_SPI_PHASE_DATA_CAPTURED_ONFIRST_CHANGED_ON_NEXT,    // Phase
        EUSCI_B_SPI_CLOCKPOLARITY_INACTIVITY_LOW, // High polarity
        EUSCI_B_SPI_3PIN                           // 3Wire SPI Mode
};



void SPI_Init(void)
{
	/* Selecting P1.5 P1.6 and P1.7 in SPI mode */
  GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P1,
          GPIO_PIN5 | GPIO_PIN6 | GPIO_PIN7, GPIO_PRIMARY_MODULE_FUNCTION);
	
	/* Configuring SPI in 3wire master mode */
  SPI_initMaster(EUSCI_B0_BASE, &spiMasterConfig);

  /* Enable SPI module */
  SPI_enableModule(EUSCI_B0_BASE);
}



u8 SPI_ReadWriteByte(u8 TxData)
{
	u8 retry=0;				 	
	while (MAP_SPI_isBusy(EUSCI_B0_BASE) == EUSCI_SPI_BUSY) //检查指定的SPI标志位设置与否:发送缓存空标志位
	{
		retry++;
		if(retry>200)return 0;
		}			  
	MAP_SPI_transmitData(EUSCI_B0_BASE, TxData); //通过外设SPIx发送一个数据
	retry=0;

	while (MAP_SPI_isBusy(EUSCI_B0_BASE) == EUSCI_SPI_BUSY) //检查指定的SPI标志位设置与否:接受缓存非空标志位
	{
		retry++;
		if(retry>200)return 0;
		}	  						    
	return MAP_SPI_receiveData(EUSCI_B0_BASE); //返回通过SPIx最近接收的数据			
	
}




