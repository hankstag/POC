#include <stdio.h>

int main(void){

	int i = 0;
	int j = 0;
	int is_prime = 0;
	for(i = 1;i < 100;i++){
		is_prime = 1;
		for(j = 2;j < i / 2;j++){
			if(i % j == 0){
				is_prime = 0;
				break;
			}
		}
		if(is_prime == 1){
			printf("%d\n", i);
		}
	}
	return 0;

}