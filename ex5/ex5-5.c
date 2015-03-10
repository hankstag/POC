#include <stdio.h>

int store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit);
int main(void){

	int x = store_bit_field(65535,291,13,9);
	printf("%d\n",x);
	return 0;

}
int store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit){
	int mask = 0;
	int length = sizeof(mask) * 8;
	int i = 0;
	int expo = 1;
	for(;i < length - 1;i++ ){
		mask += (i <= starting_bit && i >= ending_bit) ? expo : 0;
		expo *= 2;
	}
	original_value &= ~mask;
	value_to_store <<= ending_bit;
	value_to_store &= mask;
	original_value |= value_to_store;
	return original_value;
}