/*
 * ADS1292R.h
 *
 *  Created on: Jun 5, 2018
 *      Author: x0238818
 */

#ifndef ADS1292R_H_
#define ADS1292R_H_

#include <xdc/std.h>
#include <Project_Defines.h>

//System Commands
#define RESET    0x06
#define STOP     0x0A
#define START    0x08

//Data Read commands
#define RDATAC   0x10
#define SDATAC   0x11
#define RDATA    0x12

//Register Read and Write Commands
#define RREG     0x20
#define WREG     0x40

void ADS_register_write(uint8_t reg_address, uint8_t data);

unsigned int ADS_register_read(uint8_t reg_address);

void ADS_read_data(void);

void ADS_write_register_configs(void);

void ADS_write_command(uint8_t command);

int32_t * ADS_read_ecg_resp_data(void);


void ADS_init_resources(void);
void Init_ADS1x9x(void);
void ADS1x9x_Default_Reg_Init(void);
void ADS1x9x_Reg_Write(unsigned char Reg_address, unsigned char Reg_data);
unsigned char ADS1x9x_Reg_Read(unsigned char Reg_address);
//unsigned char Status ADS1x9x_Packet_Read(unsigned char Channel_address, long *data);

void ADS1x9x_Clock_Select(unsigned char clock_in);
void ADS_init_resources(void);
void Start_Read_Data_Continuous(void);
void Power_Up_ADS1x9x(void);
void ADS_reset(void);
void Init_ADS1x9x_DRDY_Interrupt(void);
void ADS1x9x_Read_All_Regs(unsigned char ADS1x9xeg_buf[]);
void ADS_soft_stop(void);
void ADS_stop_read_continuous(void);
void Soft_Start_ADS1x9x(void);
void ADS1x9x_Default_Reg_Init(void);
void Disable_ADS1x9x_DRDY_Interrupt (void);
void Clear_ADS1x9x_Chip_Enable (void);
void Enable_ADS1x9x_DRDY_Interrupt (void);
void Set_ADS1x9x_Chip_Enable (void);
void ADS1x9x_PowerOn_Init(void);
void ADS_enable_start(void);
void ADS_disable_start(void);
void Set_Device_out_bytes(void);

void ADS_config_GPIO(void);
void ADS_start_conv_command(void);
void ADS_hard_stop(void);
void ADS_PowerOn_Init(void);

void ADS_reset_high(void);
void ADS_reset_low(void);
void ADS_start_high(void);
void ADS_start_low(void);
void ADS_DRDY_goes_low(void);

void ADS_CS_low(void);
void ADS_CS_high(void);

void ADS_clock_selection(uint8_t selection);

void ADS_enable_Respiration();
void ADS_disable_Respiration();

#endif /* ADS1292R_H_ */
