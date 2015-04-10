#include <stdio.h>

float single_tax(float income);
int main(void){
	float x = single_tax(256499);
	printf("%f\n",x);
	return 0;
}
float single_tax(float income){
	float tax = 0;
	tax = (income > 256500) ? (income - 256500) * 0.396 + 81710.50 : 
		  ((income > 117950) ? (income - 117950) * 0.36 + 31832.50 :
		  ((income > 56550) ? (income - 56550) * 0.31 + 12798.50 :
		  ((income > 23350) ? (income - 23350) * 0.28 + 3502.5 : income * 0.15)
		  ));
	return tax;
}