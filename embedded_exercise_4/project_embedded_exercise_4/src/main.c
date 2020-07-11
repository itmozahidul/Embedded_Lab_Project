#include <avr/io.h> // Defines pins, ports, etc
#include <util/delay.h> // Functions to waste time
#include "lib.h"
int main(void) {
// -------- Inits -------
DDRB = 0b00001111; // Writing 0 to the bit enables input
// ------ Event loop ----
PORTB =0b00000000;
uint8_t i=0;
uint8_t* x=0;
while (1) { 

if(i==5){i=0;}

TurnLedOn(x,i);
PORTB=*x;
_delay_ms(1000);
TurnLedOff(x,i);
PORTB=*x;
_delay_ms(1000);
i++;
} 
return 0; 
}

