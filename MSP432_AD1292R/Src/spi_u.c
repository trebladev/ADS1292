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
	while (MAP_SPI_isBusy(EUSCI_B0_BASE) == EUSCI_SPI_BUSY) //���ָ����SPI��־λ�������:���ͻ���ձ�־λ
	{
		retry++;
		if(retry>200)return 0;
		}			  
	MAP_SPI_transmitData(EUSCI_B0_BASE, TxData); //ͨ������SPIx����һ������
	retry=0;

	while (MAP_SPI_isBusy(EUSCI_B0_BASE) == EUSCI_SPI_BUSY) //���ָ����SPI��־λ�������:���ܻ���ǿձ�־λ
	{
		retry++;
		if(retry>200)return 0;
		}	  						    
	return MAP_SPI_receiveData(EUSCI_B0_BASE); //����ͨ��SPIx������յ�����			
	
}




