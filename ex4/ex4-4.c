#include <stdio.h>

void copy_n( char dst[], char src[], int n );

int main(void){

	char a[30] = "Hi hank this is good.ssssssssssss";
	char b[10] = "no.";
	copy_n(a,b,20);
	printf("%s\n",a);
	return 0;
}
void copy_n( char dst[], char src[], int n ){
	int i = 0;
	int complete = 1;
	for(;i < n;i++){
		if(src[i] == '\0')
			complete = 0;
		dst[i] = complete ? src[i] : '\0';
	}
}