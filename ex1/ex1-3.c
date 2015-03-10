/*
** created by Hank 2/1/2015
** Pointers on C Exercise
*/

#include <stdio.h>
int main(void){

	signed char checksum = -1;
	signed char character;

	int length = sizeof(checksum);

	while((character = getchar()) != EOF){
		checksum += character;
	}

	printf("\n%d\n",checksum);
	printf("%d\n",length);

	return 0;
}