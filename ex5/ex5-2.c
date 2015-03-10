#include <stdio.h>

int main(void){

	char in;
	while( (int)(in = getchar())!= EOF ){
		if(in <= 'Z' && in >= 'A'){
			
			in = (in - 'A' + 13) % 26 + 'A';

		}
		else if(in <= 'z' && in >= 'a'){

			in = (in - 'a' + 13) % 26 + 'a';

		}
		printf("%c",in);
	}
	return 0;
}