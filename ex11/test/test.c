#include <stdio.h>
#include <stdlib.h>

int main(void){
	char * x = malloc(500);
	char a[100];
	int z = sizeof(x);
	int p = sizeof(a);
	printf("%d %d\n",z,p);
	return 0;
}