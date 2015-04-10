#include <stdio.h>

char* my_strcpy_end(char*,char*);
int main(void){
	char x[10] = "a";
	char y[10] = "123456";
	char *z = my_strcpy_end(x,y);
	printf("%c\n",*z);
	printf("%s\n",x);
	return 0;
}
char* my_strcpy_end(char *dst, char *src){
	while(*src != '\0'){
		*dst++ = *src++;
	}
	return dst - 1;
}