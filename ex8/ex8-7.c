#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int array_offset2(int arrayinfo[],...);
int fact(int *length,int,int);
int main(void){

	int a[7] = {3,4,6,1,5,-3,3};
	int z = array_offset2(a,4,1,-3);
	printf("%d\n",z);
	z = array_offset2(a,4,2,-3);
	printf("%d\n",z);
	z = array_offset2(a,4,1,-1);
	printf("%d\n",z);
	z = array_offset2(a,5,1,-3);
	printf("%d\n",z);
	z = array_offset2(a,4,3,-3);
	printf("%d\n",z);
	z = array_offset2(a,5,3,-1);
	printf("%d\n",z);
	return 0;

}
int array_offset2(int arrayinfo[],...){
	va_list v;
	va_start(v,arrayinfo);
	int size = arrayinfo[0],i = 0;
	int *length = (int *)malloc(sizeof(int) * size);
	int *index = (int *)malloc(sizeof(int) * size);
	for(;i < size;i++){
		//Get the indexes from argument list
		index[i] = va_arg(v,int);
		length[i] = arrayinfo[i * 2 + 2] - arrayinfo[i * 2 + 1] + 1;
	}
	va_end(v);
	int offset = 0,j = 0;
	for(i = size - 1;i > 0;i--){
		offset += fact(length,i,0) * (index[i] - arrayinfo[i * 2 + 1]);
	}
	offset += index[i] - arrayinfo[i * 2 + 1];
	return offset;
}
int fact(int *length,int index,int n){
	int i = index - 1;
	int result = 1;
	for(;i >= 0;i--){
		result *= *(length + i);
	}
	return result;
}