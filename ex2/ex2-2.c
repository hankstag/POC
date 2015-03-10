#include <stdio.h>

int main(void){

	char character;
	int count_left = 0;
	character = getchar();
	while(character != EOF){
		if(character == '{'){
			count_left += 1;
		}else if(character == '}'){
			if(count_left >= 1){
				count_left -= 1;
			}else
				printf("Meet a '}' with no '{'\n");
		}
		character = getchar();
	}

	return 0;
}