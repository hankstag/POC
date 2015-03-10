#include <stdio.h>
#include <math.h>
#define TRUE '1'
#define FALSE '0'
#define LENGTH 1000

int main(void){
	char str[LENGTH];
	int i = 0,j = 0;
	int loop = (int)sqrt(LENGTH);
	for(;i < LENGTH;i++){
		*(str + i) = TRUE;
	}
	for(i = 2;i < loop;i++){
		for(j = 0;j < LENGTH;j++){
			if(j % i == 0 && j != i)
				*(str + j) = FALSE;
		}
	}
	for(i = 0;i < LENGTH;i++){
		if(*(str + i) == TRUE)
			printf("%d\n",i);
	}

	return 0;
}