#include <stdio.h>

int gcd(int m, int n);
int main(void){

	return 0;

}
int gcd(int m, int n){
	if(m % n == 0)
		return n;
	else if(m % n > 0)
		return gcd(n, m % n);
	else
		return 0;
}