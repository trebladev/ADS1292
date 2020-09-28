/*
 * MSP432_UART_TX.c
 *
 *  Created on: May 9, 2018
 *      Author: x0238818
 */

#include <stdint.h>
#include <stddef.h>

#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/cfg/global.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Semaphore.h>

#include <MSP432_UART_TX.h>
#include <MSP432_UART.h>

/* Example/Board Header files */
#include "Board.h"

uint8_t uart_tx_buffer[40];
uint8_t tx_size;

uint32_t no_of_transmit = 0;

ui32_8_type ui32_8_convert;

//uint8_t uart_sample_data[1500];
//int sample_size = 0;

void MSP432_UART_main_task(void)
{
    while(1)
    {
        Semaphore_pend(SEM_UART_DATA_TO_BE_SENT, BIOS_WAIT_FOREVER);

        no_of_transmit += 1;

        uint8_t test[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

//Uncomment below to send the known packets and comment line num 54
//        MSP_UART_write(test, sizeof(test));

        //Breakpoint after transmitting 5000 packets, you should be able to see 5000 points in GUI.
        if(no_of_transmit > 5000)
        {
            no_of_transmit = 0;
        }
        //Uncomment below to send the AFE and ADS packets and comment line num 47
        MSP_UART_write(uart_tx_buffer, tx_size);
    }
}

void UART_packet_format_and_send(uint8_t content_id)
{

    UART_Packet UART_buffer_packet;

    uint8_t header = 0;
    uint8_t i = 0;
    uint8_t j = 1;
    uint8_t bytes[2];
    switch(content_id)
    {

    case AFE_ADS_DATA:

        tx_size = 0;
        uint32_t motion_leadoff = 0;

        UART_buffer_packet.Header_packet.content_id = AFE_ADS_DATA;
        UART_buffer_packet.Header_packet.format_id = 0;
        UART_buffer_packet.Header_packet.patient_alarm = patient_alarmed;
        UART_buffer_packet.Header_packet.pace_detect = pace_detected;

        UART_buffer_packet.Header_packet.content_id = ((UART_buffer_packet.Header_packet.content_id & 0x07) << 5);
        UART_buffer_packet.Header_packet.format_id = ((UART_buffer_packet.Header_packet.format_id & 0x07) << 2);
        UART_buffer_packet.Header_packet.patient_alarm = ((UART_buffer_packet.Header_packet.patient_alarm & 0x01) << 1);
        UART_buffer_packet.Header_packet.pace_detect = ((UART_buffer_packet.Header_packet.pace_detect & 0x01));

        header = (UART_buffer_packet.Header_packet.content_id | UART_buffer_packet.Header_packet.format_id| UART_buffer_packet.Header_packet.patient_alarm | UART_buffer_packet.Header_packet.pace_detect);

        motion_leadoff = ((motion << 8) | leadoff_detect);

//        motion_leadoff = 0x11;
//        ecg = 0xAA55;
//        resp = 0x55AA;

        UART_buffer_packet.Data_packet.SPO2_ECG.Data32.IR = Led_1;
        UART_buffer_packet.Data_packet.SPO2_ECG.Data32.IR_amb = Led_1_amb;
        UART_buffer_packet.Data_packet.SPO2_ECG.Data32.Red = Led_2;
        UART_buffer_packet.Data_packet.SPO2_ECG.Data32.Red_amb = Led_2_amb;
        UART_buffer_packet.Data_packet.SPO2_ECG.Data32.ECG = ecg;
        UART_buffer_packet.Data_packet.SPO2_ECG.Data32.Respiration = resp;
        UART_buffer_packet.Data_packet.SPO2_ECG.Data32.Motion_Leadoff = motion_leadoff;

//        if((sample_size + 32) > 1500)
//        {
//            sample_size = 0;
//        }

        uart_tx_buffer[ tx_size++ ] = header;

//        uart_sample_data[sample_size++] = header;

        for(i=0; i<DATA_ID_1_SIZE; i++)
        {
            if ((j % 4) != 0)
            {
                uart_tx_buffer[ tx_size++ ] = UART_buffer_packet.Data_packet.SPO2_ECG.Data8[i];

                //uart_sample_data[sample_size++] = UART_buffer_packet.Data_packet.SPO2_ECG.Data8[i];

                j++;
            }
            else
            {
                j++;
            }

        }

//        pace_detected = 0;
        break;


    case CONFIG_DATA:

        tx_size = 0;

        UART_buffer_packet.Header_packet.content_id = CONFIG_DATA;
        UART_buffer_packet.Header_packet.format_id = 0;
        UART_buffer_packet.Header_packet.patient_alarm = patient_alarmed;
        UART_buffer_packet.Header_packet.pace_detect = pace_detected;

        UART_buffer_packet.Header_packet.content_id = ((UART_buffer_packet.Header_packet.content_id & 0x07) << 5);
        UART_buffer_packet.Header_packet.format_id = ((UART_buffer_packet.Header_packet.format_id & 0x07) << 2);
        UART_buffer_packet.Header_packet.patient_alarm = ((UART_buffer_packet.Header_packet.patient_alarm & 0x01) << 1);
        UART_buffer_packet.Header_packet.pace_detect = ((UART_buffer_packet.Header_packet.pace_detect & 0x01));

        header = (UART_buffer_packet.Header_packet.content_id | UART_buffer_packet.Header_packet.format_id| UART_buffer_packet.Header_packet.patient_alarm | UART_buffer_packet.Header_packet.pace_detect);

        UART_buffer_packet.Data_packet.Config.Data32_id_3.Sampling_rate = SAMP_500_SPS;
        UART_buffer_packet.Data_packet.Config.Data32_id_3.Connection = UART;

        uart_tx_buffer[ tx_size++ ] = header;

        for(i=0; i<DATA_ID_3_SIZE; i++)
        {
            if ((j % 4) != 0)
            {
                uart_tx_buffer[ tx_size++ ] = UART_buffer_packet.Data_packet.Config.Data8_id_3[i];
                j++;
            }
            else
            {
                j++;
            }

        }

        break;


    case PACE_TMP_DATA:

        tx_size = 0;

        UART_buffer_packet.Header_packet.content_id = PACE_TMP_DATA;
        UART_buffer_packet.Header_packet.format_id = 0;
        UART_buffer_packet.Header_packet.patient_alarm = patient_alarmed;
        UART_buffer_packet.Header_packet.pace_detect = pace_detected;

        UART_buffer_packet.Header_packet.content_id = ((UART_buffer_packet.Header_packet.content_id & 0x07) << 5);
        UART_buffer_packet.Header_packet.format_id = ((UART_buffer_packet.Header_packet.format_id & 0x07) << 2);
        UART_buffer_packet.Header_packet.patient_alarm = ((UART_buffer_packet.Header_packet.patient_alarm & 0x01) << 1);
        UART_buffer_packet.Header_packet.pace_detect = ((UART_buffer_packet.Header_packet.pace_detect & 0x01));

        header = (UART_buffer_packet.Header_packet.content_id | UART_buffer_packet.Header_packet.format_id| UART_buffer_packet.Header_packet.patient_alarm | UART_buffer_packet.Header_packet.pace_detect);

        UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Pace_height = (pace_height/10);
        UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Pace_rise_time = (pace_rise_time/10);
        UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Pace_width = (pace_width/10);
        UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Temp_1 = Tmp_1;
        UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Temp_2 = Tmp_2;
        UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Temp_3 = Tmp_3;

        uart_tx_buffer[ tx_size++ ] = header;

        for(i=0; i<DATA_ID_2_SIZE; i++)
        {
           uart_tx_buffer[ tx_size++ ] = UART_buffer_packet.Data_packet.TMP_PACE.Data8_id_2[i];
        }

        bytes[0] = UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Temp_1 >> 8;     // high byte
        bytes[1] = UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Temp_1 & 0x00FF; // low byte
        uart_tx_buffer[ tx_size++ ] = bytes[1];
        uart_tx_buffer[ tx_size++ ] = bytes[0];


        bytes[0] = UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Temp_2 >> 8;     // high byte
        bytes[1] = UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Temp_2 & 0x00FF; // low byte
        uart_tx_buffer[ tx_size++ ] = bytes[1];
        uart_tx_buffer[ tx_size++ ] = bytes[0];

        bytes[0] = UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Temp_3 >> 8;     // high byte
        bytes[1] = UART_buffer_packet.Data_packet.TMP_PACE.Data32_id_2.Temp_3 & 0x00FF; // low byte
        uart_tx_buffer[ tx_size++ ] = bytes[1];
        uart_tx_buffer[ tx_size++ ] = bytes[0];

        pace_height = 0;
        pace_rise_time = 0;
        pace_width = 0;

//        pace_detected = 0;

        break;

    }


    Semaphore_post(SEM_UART_DATA_TO_BE_SENT);
}

