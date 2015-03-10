#include <stdio.h>

int main(void){

	char *p = "abcde";
	p[3] = 'p';
	printf("%s\n",p);
	return 0;
}