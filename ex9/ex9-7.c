#include <stdio.h>
#include <string.h>

const char *my_strrchr(const char *str, int ch);
int main(void){
	char a[] = "aeiouuussp";
	char b = 'o';
	const char *c = my_strrchr(a,b);
	printf("%s\n",c);
	return 0;
}
const char *my_strrchr(const char *str, int ch){
	int len = strlen(str);
	const char* tmp = str;
	for(str = str + len - 1;str >= tmp;str--){
		if(*str == ch)
			return str;
	}
	return NULL;
}