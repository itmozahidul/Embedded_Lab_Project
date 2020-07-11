#include <avr/io.h>
#include <stdio.h>
#include "lib.h"

void TurnLedOn(uint8_t* port,uint8_t pin_no ){
(*port) |=(1<<pin_no);
printf("#################port : %u",(*port));
}

void TurnLedOff(uint8_t* port,uint8_t pin_no ){
(*port) &= ~(1<<pin_no);
}

void ToggleLed(uint8_t* port,uint8_t pin_no ){
(*port) ^= (1<<pin_no);
}