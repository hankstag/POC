#include <stdio.h>

char *find_char(char const *source, char const *chars);
int main(void){

	char a[100] = "ABCDEF";
	char b[100] = "XRCQEF";
	char *x = find_char(a,b);
	printf("%c\n",*x);
	return 0;

}
char *find_char(char const *source, char const *chars){
	char *a = (char*)source;
	char *b = (char*)chars;
	while(*b != '\0'){
		while(*a != '\0'){
			if(*b == *a){
				return b;
			}
			a += 1;
		}
		a = (char*)source;
		b += 1;
	}
	return NULL;
}
