#include <stdio.h>

int main(void){

	int n;
	double expo = 1.0;
	double expo_n = 1.0;
	scanf("%d",&n);
	do{
		expo = expo_n;
		expo_n = (expo + n / expo) / 2;
	}while(expo_n != expo);
	printf("Result is %lf\n",expo_n);
	return 0;
	
}