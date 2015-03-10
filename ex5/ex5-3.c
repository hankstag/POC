#include <stdio.h>
#include <math.h>

unsigned int reverse_bits(unsigned int value);

int main(void){

	unsigned int result = 0;
	result = reverse_bits(25);
	printf("%u\n",result);
	return 0;


}
unsigned int reverse_bits(unsigned int value){
	int size = sizeof(unsigned int);
	unsigned int result = 0;
	int length = size * 8;
	int i = 0,j = 0;
	unsigned int expo = 1;
	for(;i < length;i++){
		expo = 1;
		for(j = 1;j < length - i;j++){
			expo *= 2;
		}
		result += (value % 2) * expo;
		value /= 2;
	}
	return result;
}