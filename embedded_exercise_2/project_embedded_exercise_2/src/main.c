#include <stdio.h>
#include "lib.h"

int main(int argc,const char* argv[]){
	                                  printf("Hello world!\n");
	                                    uint8_t myCurrentNumber = 3 ;
										
										 printf("first print %u \n", myCurrentNumber);
										 myCurrentNumber |= (1 << 6);
										 printf("second print %u \n", myCurrentNumber);
										 myCurrentNumber &= ~(1 << 3);
										 printf("third print %u \n", myCurrentNumber);
										 myCurrentNumber ^= ~(1 << 3);
										 printf("third print %u \n", myCurrentNumber);
										 printf("printbitsequence:");
										 myCurrentNumber = 147 ;
										 printBitSequence(&myCurrentNumber);
										 
										 
										 
										 return 0;
										 };