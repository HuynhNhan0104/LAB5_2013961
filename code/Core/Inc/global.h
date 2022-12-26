/*
 * global.h
 *
 *  Created on: Dec 25, 2022
 *      Author: NHAN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#define NUMBER_OF_TIMER 																				1
#define TIME_CYCLE																								10
#define TIMER_UART																							0

extern int state_command_parser;
extern int state_uart_communication;
extern uint32_t ADC_value;

extern int RST_flag;
extern int OK_flag;



//data in terminal is not in forme "!XXXXXX#"
#define NO_RECEIVE_DATA 																					0
// get "!"
#define START																										1


//get "RST"
#define GET_R																										2
#define GET_S																										3
#define GET_T																										4
//
#define END_RST																									5


////get "OK"
#define GET_O																										6
#define GET_K																										7
#define END_OK																									8





//
#define NO_SEND_DATA																						9
#define SEND_DATA			 																					10







#endif /* INC_GLOBAL_H_ */
