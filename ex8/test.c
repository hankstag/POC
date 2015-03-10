#include <stdio.h>
#include <stdlib.h>

int main(void){

	extern int *a;
	extern int b[];
	int x, y;
	//x = a[3];
	y = b[3];
	printf("%d\n",y);	
	return 0;

}
