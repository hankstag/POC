#include <stdio.h>
#include <string.h>
#define FALSE 0
#define TRUE 1
#define BOOL int

BOOL identity_matrix(int *x,int size);
int main(void){
	BOOL x = 0;
	int p[20][20];
	memset(p,0,sizeof(p));
	int i = 0;
	for(;i < 20;i++){
		p[i][i] = 1;
	}
	x = identity_matrix(p[0],20);
	printf("%d\n",x);
	return 0;
}
BOOL identity_matrix(int *x,int size){
	BOOL flag = 0;
	int i = 0,j = 0;
	for(;i < size;i++){
		for(j = 0;j < size;j++){
			if(i != j && *(x + size * i + j) != 0)
				return FALSE;
			if(i == j && *(x + size * i + j) != 1)
				return FALSE;
		}
	}
	return TRUE;
}