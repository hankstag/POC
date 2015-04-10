#include <stdio.h>
#include <string.h>

void my_strcpy(char *,char *);
int main(void){
	char x[] = "abcdefdfsafasds";
	char y[] = "ccccav";
	my_strcpy(x,y);
	printf("%s\n",x);
	return 0;
}
void my_strcpy(char *dst,char *src){
	int max = strlen(dst);
	int len = strlen(src);
	int copy = (len >= max) ? max : len;
	int i = 0;
	while(i++ < copy){
		*dst++ = *src++;
	}
}