#include <stdio.h>

int hermite(int n, int x);
int main(void){
	int x = hermite(3,2);
	printf("%d\n",x);
	return 0;
}
int hermite(int n, int x){
	int p1 = 0;
	int p2 = 0;
	if(n <= 0)
		return 1;
	else if(n == 1)
		return 2 * x;
	else{
		p1 = hermite(n - 1, x);
		p2 = hermite(n - 2, x);
		return 2 * p1 * x - 2 * (n - 1) * p2;
	}
}