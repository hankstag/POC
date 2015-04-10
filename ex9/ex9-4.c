#include <stdio.h>
#include <string.h>

int my_strnlen(char *,int);
void my_strcat(char *,char *,int size1,int size2);
int main(void){
	char a[10] = "abd";
	char b[] = "dddeffff fff";
	my_strcat(a,b,10,10);
	printf("%s\n",a);
	return 0;
}
void my_strcat(char *dst,char *src,int size1,int size2){
	int len1 = my_strnlen(dst,size1);
	int len2 = my_strnlen(src,size2);
	printf("%d %d\n",len1,len2);
	int cat = (len1 + len2 > size1) ? size1 - 1 : (len1 + len2);
	dst += len1;
	while(++len1 < cat){
		*dst++ = *src++;
	}
	*dst = '\0';
}
int my_strnlen(char *str,int size){
	int count = 0;
	while(*str++ != '\0' && count < size)
		count++;
	return count;
}