#include <avr/io.h> // Defines pins, ports, etc
#include <util/delay.h> // Functions to waste time
//#define F_CPU 1000000UL

int main(void){
DDRB = 0b11111111;
int x = 0,y=0; 
ADCSRA=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
while(1){

ADMUX=(1<<MUX0)|(1<<REFS0);
ADCSRA |=(1<<ADSC);


while(!((ADCSRA)&(1<<ADIF))){}
x = ADCL;
y = ADCH;
PORTB=x;_delay_ms(1000);
/*if(x<255){
	PORTB=x;
}

_delay_ms(1000);
PORTB=0b00000000;
_delay_ms(1000);

if(y<3){
	PORTB=y;_delay_ms(1000);
}*/
}


return 0;
}