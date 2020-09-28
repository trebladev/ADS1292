/*
 * Pace_maker.h
 *
 *  Created on: Jun 27, 2018
 *      Author: x0238818
 */

#ifndef PACE_DETECT_H_
#define PACE_DETECT_H_
#define PD_DAC_SLAVE0  0x48
#define PD_DAC_SLAVE1  0x4A
#define PD_DAC_SLAVE2  0x4C
// To-do : select from any one of the  below
#define PD_DAC_SLAVE    PD_DAC_SLAVE2



#define PD_ADC_SLAVE   0x1B

#define NUM_OF_DAC_CHANNEL   5
#define DAC_VREF             3

#define CH_A_WRITE   0x00
#define CH_B_WRITE   0x01
#define CH_C_WRITE   0x02
#define CH_D_WRITE   0x03
#define CH_E_WRITE   0x04
#define CH_F_WRITE   0x05

#define CH_A_VOLTAGE   0xD7 //0xe5 //0xD5
#define CH_B_VOLTAGE   0x00
#define CH_C_VOLTAGE   0x14 //0x20
#define CH_D_VOLTAGE   0x26
#define CH_E_VOLTAGE   0x50 //0x80
#define CH_F_VOLTAGE   0x00

//these will only show 1ms pace pulse
void clock_pacedetectStart();
void Pacedetect_main_task(void);

typedef struct paceDetectDataStruct{
    uint16_t riseTime;
    uint16_t duration;
} paceDetectDataStruct;


void Pacedetect_DAC_reg_write(uint8_t reg_pointer, uint8_t reg_value);
uint8_t Pacedetect_DAC_reg_read(uint8_t reg_pointer);

void Pacedetect_ADC_reg_write(uint8_t reg_pointer, uint8_t reg_value);
paceDetectDataStruct Pacedetect_ADC_reg_read_data();
uint8_t Pacedetect_ADC_reg_read(uint8_t reg_pointer);

void Pace_detect_goes_high(void);

void Pace_reset_high(void);
void Pace_reset_low(void);

#endif /* PACE_DETECT_H_ */
