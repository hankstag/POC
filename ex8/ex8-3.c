#include <stdio.h>
#include <string.h>
#define FALSE 0
#define TRUE 1
#define BOOL int

BOOL identity_matrix(int (*x)[10]);
int main(void){
	BOOL x = 0;
	int p[10][10];
	memset(p,0,sizeof(p));
	int i = 0;
	for(;i < 10;i++){
		p[i][i] = 1;
	}
	x = identity_matrix(p);
	printf("%d\n",x);
	return 0;
}
BOOL identity_matrix(int (*x)[10]){
	BOOL flag = 0;
	int i = 0,j = 0;
	for(;i < 10;i++){
		for(j = 0;j < 10;j++){
			if(i != j && x[i][j] != 0)
				return FALSE;
			if(i == j && x[i][j] != 1)
				return FALSE;
		}
	}
	return TRUE;
}