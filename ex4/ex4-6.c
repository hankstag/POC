#include <stdio.h>
#include <string.h>

int substr( char dst[], char src[], int start, int len );
int main(void){
	char a[100] = "abcdefghijklmnopqrstuvwxyz";
	char b[100] = "111111111111111";
	substr(b,a,3,8);
	printf("%s\n",b);
	return 0;
}
int substr( char dst[], char src[], int start, int len ){
	int i = 0;
	int max = strlen(src);
	if(start < 0 || len < 0 || start >= max){
		dst[0] = '\0';
		return 0;
	}
	for(;i < len;i++){
		if(start + i > max){
			break;
		}
		dst[i] = src[start + i];
	}
	dst[len] = '\0';
	return strlen(dst);
}