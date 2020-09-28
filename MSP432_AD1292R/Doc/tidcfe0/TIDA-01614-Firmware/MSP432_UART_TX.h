/*
 * MSP432_UART_TX.h
 *
 *  Created on: May 9, 2018
 *      Author: x0238818
 */

#ifndef MSP432_UART_TX_H_
#define MSP432_UART_TX_H_

#include <board.h>

#include <xdc/std.h>

#define AFE_ADS_DATA       1
#define PACE_TMP_DATA      2
#define CONFIG_DATA        3

#define UART               1
#define BLE                2

#define DATA_ID_1_SIZE     28
#define DATA_ID_3_SIZE     4
#define DATA_ID_2_SIZE     3 // actual size is 9

typedef union
{
    uint32_t data32[5];
    uint8_t data8[20];

}ui32_8_type;

typedef struct Data_id_1
{
    uint32_t Red;
    uint32_t Red_amb;
    uint32_t IR;
    uint32_t IR_amb;
    uint32_t ECG;
    uint32_t Respiration;
    uint32_t Motion_Leadoff;
}Data_id_1;

typedef union Data_1
{
    Data_id_1 Data32;
    uint8_t Data8[DATA_ID_1_SIZE];
}Data_1;

typedef struct Data_id_2
{
    uint8_t Pace_height;
    uint8_t Pace_width;
    uint8_t Pace_rise_time;
    uint16_t Temp_1;
    uint16_t Temp_2;
    uint16_t Temp_3;
}Data_id_2;

typedef union Data_2
{
    Data_id_2 Data32_id_2;
    uint8_t Data8_id_2[DATA_ID_2_SIZE];
}Data_2;

typedef struct Data_id_3
{
    uint16_t Sampling_rate;
    uint8_t Connection;
}Data_id_3;

typedef union Data_3
{
    Data_id_3 Data32_id_3;
    uint8_t Data8_id_3[DATA_ID_3_SIZE];
}Data_3;

typedef union Data
{
    Data_1 SPO2_ECG;
    Data_2 TMP_PACE;
    Data_3 Config;
}Data;

typedef struct Header
{

    uint8_t content_id;
    uint8_t format_id;
    uint8_t patient_alarm;
    uint8_t pace_detect;

}Header;

typedef struct UART_Packet
{
    Header Header_packet;
    Data Data_packet;

}UART_Packet;



void MSP432_UART_main_task(void);

void UART_packet_format_and_send(uint8_t content_id);



#endif /* MSP432_UART_TX_H_ */
