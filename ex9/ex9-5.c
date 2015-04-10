#include <stdio.h>
#include <string.h>

void my_strcat(char *,char *,int);
int main(void){
	char a[10] = "abd";
	char b[] = "dddeffff fff";
	my_strcat(a,b,10);
	printf("%s\n",a);
	return 0;
}
void my_strcat(char *dst,char *src,int size){
	int len1 = strlen(dst);
	int len2 = strlen(src);
	int cat = (len1 + len2 > size) ? size : (len1 + len2);
	dst += len1;
	while(++len1 < cat){
		*dst++ = *src++;
	}
	*dst = '\0';
}