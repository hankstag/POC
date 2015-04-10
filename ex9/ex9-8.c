#include <stdio.h>
#include <string.h>

const char *my_strnchr(char const *str,int ch, int which);
int main(void){

	char a[] = "aeiouuussp";
	char b = 'u';
	const char *c = my_strnchr(a,b,3);
	printf("%s\n",c);
	return 0;

}
const char *my_strnchr(char const *str,int ch, int which){
	int count = 0;
	int len = strlen(str);
	const char* tmp = str;
	for(str += len - 1;str >= tmp;str--){
		if(*str == ch){
			count += 1;
			if(count == which){
				return str;
			}
		}
	}
	return NULL;
}