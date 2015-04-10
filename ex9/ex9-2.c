#include <stdio.h>

int my_strnlen(char *,int);
int main(void){
	char x[6] = "a";
	int z = my_strnlen(x,sizeof(x));
	printf("%d\n",z);
	return 0;
}
int my_strnlen(char *str,int size){
	int count = 0;
	while(*str++ != '\0' && count < size)
		count++;
	return count;
}