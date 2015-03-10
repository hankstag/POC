/*
** created by Hank 2/1/2015
** Pointers on C Exercise
*/

#include <stdio.h>
int main(void){

	char character;
	int line = 1;
	character = getchar();
	//Handle the first line
	while(character != EOF){
		printf("%-3d",line);
		while(character != '\n'){
			printf("%c",character);
			character = getchar();
		}
		line += 1;
		printf("\n");
		character = getchar();
	}
	return 0;

}