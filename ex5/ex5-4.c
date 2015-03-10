#include <stdio.h>

void set_bit( char bit_array[], unsigned bit_number );
void clear_bit( char bit_array[], unsigned bit_number );
void assign_bit( char bit_array[], unsigned bit_number, int value );
int test_bit( char bit_array[], unsigned bit_number );

int main(void){
	
	
	return 0;

}

void set_bit( char bit_array[], unsigned bit_number ){
	int n = bit_number / sizeof(char);
	int offset = bit_number - n * sizeof(char);
	char mask = 1 << offset;
	bit_array[n] |= mask;
}
void clear_bit( char bit_array[], unsigned bit_number ){
	int n = bit_number / sizeof(char);
	int offset = bit_number - n * sizeof(char);
	char mask = 1 << offset;
	bit_array[n] &= ~mask;
}
void assign_bit( char bit_array[], unsigned bit_number, int value ){
	int n = bit_number / sizeof(char);
	int offset = bit_number - n * sizeof(char);
	char mask = 1 << offset;
	if(value){
		bit_array[n] |= mask;
	}
	else
		bit_array[n] &= ~mask;
}
int test_bit( char bit_array[], unsigned bit_number ){

	int n = bit_number / sizeof(char);
	int offset = bit_number - n * sizeof(char);
	char mask = 1 << offset;
	if(bit_array[n] &= mask){
		return 1;
	}
	return 0;

}