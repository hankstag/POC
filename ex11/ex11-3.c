#include <stdio.h>
#include <stdlib.h>

char *inputline();
int main(void){
	char *m = inputline();
	printf("%s\n",m);
	return 0;
}
char *inputline(){
	char ch;
	size_t size = 20,len = 0;
	char *array = malloc(size + 1);
	size_t bulk = 20;
	while((ch = getchar()) != EOF){
		if(len >= size - 1){
			size += bulk;
			array = realloc(array,size);
			if(array == NULL)
				break;
		}
		*(array+len) = ch;
		len++;
	}
	*(array + len) = '\0';
	return array;
}