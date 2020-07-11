#ifndef lib
void setBitsToOne(uint8_t* pointerToValue, uint8_t bitmask){
	 (*pointerToValue) |= bitmask;
}

void setBitsToZero(uint8_t* pointerToValue, uint8_t bitmask){
	 (*pointerToValue) &= ~(bitmask);
}

void flipBits(uint8_t* pointerToValue, uint8_t bitmask){
	 //uint8_t lst[length];
}

void printBitSequence(uint8_t* pointerToValue){
	int length=0,index=0;
	uint8_t temp;
	uint8_t num=2;
	temp=(*pointerToValue);
	while(temp!=0){
		
		temp=temp/num;
		length++;
		
	} 
	printf("length: %u \n",length);
	temp=(*pointerToValue);
	uint8_t lst[length];
	uint8_t flst[length];
	length=0;
	while(temp!=0){
		
		lst[length]=temp%num;
		temp=temp/num;
		printf("temp:%u  lst[%u]: %u \n",temp,length,lst[length]);
		length++;
		
	}
	
	for(int i=length-1;i>=0;i--){
		flst[index]=lst[i];
		index++;
	}
	for(int i=0;i<length;i++){
		printf("%u",flst[i]);
	}
}

#define lib
#endif
