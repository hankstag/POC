#include <stdio.h>

int increment(int);
int negate(int);

int main(){
	int a1,b1,a2,b2,a3,b3;
	a1 = increment(10);
	b1 = negate(10);
	a2 = increment(0);
	b2 = negate(0);
	a3 = increment(-10);
	b3 = negate(-10);
	printf("increment\tnegate\t\n");
	printf("%d\t%d\n",a1,b1);
	printf("%d\t%d\n",a2,b2);
	printf("%d\t%d\n",a3,b3);
	return 0;
}