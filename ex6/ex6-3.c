#include <stdio.h>
#include <string.h>

void reverse_string( char *string );
int main(void){

	char x[100] = "hankshen";
	reverse_string(x);
	printf("%s\n",x);
	return 0;

}
void reverse_string( char *string){
	int length = strlen(string);
	int i = 0;
	char tmp;
	for(;i < length / 2;i++){
		tmp = *(string + i);
		*(string + i) = *(string + length - i - 1);
		*(string + length - i - 1) = tmp;
	}
}