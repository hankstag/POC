#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *my_calloc(size_t );
void *my_calloc(size_t size){
	void *out = malloc(size);
	memset(out,0,size);
	return out;
}
int main(void){
	int *x = my_calloc(100);
	printf("%d\n",*x);
	return 0;
}