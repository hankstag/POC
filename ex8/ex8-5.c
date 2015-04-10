#include <stdio.h>

void matrix_multiply(int *m1,int *m2,int *r,int x,int y,int z);
int main(void){

	int m1[3][2] = {
		{2,-6},
		{3,5},
		{1,-1}
	};
	int m2[2][4] = {
		{4,-2,-4,-5},
		{-7,-3,6,7}
	};
	int r[3][4];
	matrix_multiply(m1[0],m2[0],r[0],3,2,4);
	return 0;
}
void matrix_multiply(int *m1,int *m2,int *r,int x,int y,int z){
	int i = 0,j = 0,k = 0;
	int sum = 0;
	for(;i < x;i++){
		for(j = 0;j < z;j++){
			sum = 0;
			for(k = 0;k < y;k++){
				sum += *(m1 + i * y + k) * (*(m2 + k * z + j));
			}
			*(r + x * i + j) = sum;
			printf("%d ",sum);
			if(j == z - 1)
				printf("\n");
		} 
	}
}