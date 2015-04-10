#include <stdio.h>
#include <string.h>

void dollars( char *dest, char const *src,int size);
int main(void){
	char dest[100];
	char const src[] = "";
	dollars(dest,src,100);
	return 0;
}
void dollars( char *dest, char const *src,int max){
	int len = strlen(src);
	char *ankle = dest;
	if(len > max){
		printf("Too much money\n");
		return;
	}
	*dest++ = '$';
	int i = 0;
	if(len >= 3){
		for(;i < len - 2;i++){
			if((len - 2 - i) % 3 == 0 && i != 0)
				*dest++ = ',';
			*dest++ = *src++;
		}
	}else{
		*dest++ = '0';
	}
	*dest++ = '.';
	*dest++ = (len < 2) ? '0' : *src++;
	*dest++ = (len < 1) ? '0' : *src++;
	*dest = '\0';
	printf("%s\n",ankle);
}