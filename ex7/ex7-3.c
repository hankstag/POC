#include <stdio.h>
#include <string.h>

int ascii_to_integer(char *string);
int main(void){

	char x[100] = "23456";
	int y = ascii_to_integer(x);
	printf("%d\n",y);
	return 0;

}
int ascii_to_integer(char *string){
	int value = 0;
	int index = strlen(string) - 1;
	int expo = 1;
	for(;index >= 0; index--){
		value += (*(string + index) - '0' + 0) * expo;
		expo *= 10;
	}
	return value;
}