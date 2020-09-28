## Example Summary

Application to demonstrate use of the SPI driver to create a simple external
loop-back.

## Peripherals Exercised

* `Board_LED0` - Indicator LED
* `Board_SPI0` - SPI peripheral assigned as a Master
* `Board_SPI1` - SPI peripheral assigned as a Slave

## Resources & Jumper Settings

>Please refer to the development board's specific __Settings and Resources__
section in the Getting Started Guide. For convenience, a short summary is also
shown below.

| Development board | Notes: The following jumper wire connections are needed for the external SPI loopback example                                        |
| ----------------  | -----------------------------------------------------  |
| DK-TM4C129X       | `PQ0->PD3`, `PQ1->PD2`, `PF0->PG5`, `PQ2->PG4`                 |
| EK-TM4C123GXL     | `PA2->PD0`, `PA3->PD1`, `PA4->PD3`, `PA5->PD2`                 |
| EK-TM4C1294XL     | `PD3->PQ0`, `PD2->PQ1`, `PD0->PQ2`, `PD1->PQ3`                 |
| EK-TM4C129EXL     | `PD3->PQ0`, `PD2->PQ1`, `PD0->PQ2`, `PD1->PQ3`                 |
| MSP-EXP432P401R   | `P1.5->P3.5`, `P1.6->P3.6`, `P1.7->P3.7`                     |
| TMDXDOCK28M36     | `71->75`, `73->77`, `69->81`, `67->79`                         |
| TMDXDOCKH52C1     | `GPIO02->GPIO24`, `GPIO03->GPIO25`, `GPIO04->GPIO27`, `GPIO05->GPIO26`|

## Example Usage

* Run the example. `Board_LED0` turns ON to indicate TI-RTOS driver
initialization is complete.

* Once initialized, the Slave SPI will send a message to the Master SPI.
The Master SPI will also send a message to the Slave SPI. After the transfer is
complete, the messages are printed on the console. Messages should appear as
follows:
```
        SPI initialized
        SPI initialized
        Slave: Hello, this is master SPI
        Master: Hello, this is slave SPI
        Done
```

## Application Design Details

This application uses two tasks:

`masterTaskFxn` - creates the Master SPI message and initiates the SPI transfer.
`slaveTaskFxn` - creates the Slave SPI message and waits for the Master to
start the SPI transaction. This task runs at a higher priority
than the masterTaskFxn, the Slave SPI must be ready before the
Master SPI starts the transaction.

The `masterTask` performs the following actions:

1. Opens and initializes an SPI driver object.

2. Creates a SPI transaction structure and sets txBuffer to `Hello, this is
master SPI`.

3. Transfers the message. If the transfer is successful, the message
received from the Slave SPI is printed. Otherwise, an error message
is printed.

4. Closes the SPI driver object and terminates execution.

The `slaveTask` performs the following actions:

1. Opens and initializes an SPI driver object.

2. Creates a SPI transaction structure and sets txBuffer to `Hello, this is
slave SPI`.

3. Waits for the Master SPI before sending the message. If the transfer is
successful, the message received from the Master SPI is printed.
Otherwise, an error message is printed.

4. Closes the SPI driver object.

## References
* For GNU and IAR users, please read the following website for details
  about enabling [semi-hosting](http://processors.wiki.ti.com/index.php/TI-RTOS_Examples_SemiHosting)
  in order to view console output.