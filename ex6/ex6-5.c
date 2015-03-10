#include <stdio.h>
#include <math.h>
#define TRUE '1'
#define FALSE '0'
#define LENGTH 100000

int store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit);
int main(void){
	int str[LENGTH / 32 + 1];
	int i = 0,j = 0;
	int loop = (int)sqrt(LENGTH);
	for(;i < LENGTH / 32 + 1;i++){
		*(str + i) = 0xffffffff;
	}
	for(i = 2;i <= loop;i++){
		for(j = 0;j <= LENGTH;j++){
			if(j % i == 0 && j != i){
				*(str + j / 32) = store_bit_field(*(str + j / 32),0,j % 32,j % 32);
			}
		}
	}
	*(str + j / 32) = store_bit_field(*(str + j / 32),0,31,j % 32);
	for(i = 0;i <= LENGTH / 32;i++){
		unsigned int tmp = *(str + i);
		int index = 0;
		unsigned int mask = 1;
		for(;index < 32;index++){
			mask <<= index;
			if(mask & tmp){
				printf("%d\n", i * 32 + index);
			}
			mask = 1;
		}
	}
	return 0;
}
int store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit){
	unsigned int mask = 0;
	int length = sizeof(mask) * 8;
	int i = 0;
	unsigned int expo = 1;
	for(;i < length;i++ ){
		mask += (i <= starting_bit && i >= ending_bit) ? expo : 0;
		expo *= 2;
	}
	original_value &= ~mask;
	value_to_store <<= ending_bit;
	value_to_store &= mask;
	original_value |= value_to_store;
	return original_value;
}