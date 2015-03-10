#include <stdio.h>

int main(void){

	char in;
	while( (int)(in = getchar())!= EOF ){
		if(in <= 'Z' && in >= 'A'){
			in += 'z' - 'Z';
		}
		printf("%c",in);
	}
	return 0;
}