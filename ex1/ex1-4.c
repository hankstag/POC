/*
** created by Hank 2/1/2015
** Pointers on C Exercise
*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000

int main(void){
	char line[MAX_LEN];
	char temp[MAX_LEN];
	int max = 0;
	while(fgets(line,MAX_LEN,stdin) != NULL){
		if(strlen(line) > max){
			strcpy(temp,line);
			max = strlen(line);
		}
	}
	printf("%s",temp);
	return 0;
}