#include <stdio.h>
#include <stdarg.h>

int max_list(int n_values, ...);
int main(void){

	int x = max_list(10,1,2,322,3,4,555,3,3,44,-999);
	printf("%d\n",x);
	return 0;

}
int max_list(int n_values, ...){
	va_list v;
	int index = 0;
	int max = 0;
	int p = 0;
	va_start(v, n_values);
	max = va_arg(v, int);
	for(index = 1; index < n_values; index++){
		if((p = va_arg(v,int)) > max)
			max = p;
	}
	va_end(v);
	return max;
}