#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int place(int *,int);
int main(void){

	int i = 0;
	int col[8];
	memset(col,0,sizeof(int) * 8);
	place(col,0);
	for(;i < 8;i++)
		printf("%d ",col[i]);
	printf("\n");
	return 0;

}
int place(int *col,int i){
	int j = 0,k = 0;
	for(;j < 8;j++){
		col[i] = j;
		for(k = 0;k < i;k++){
			if(i == k)
				continue;
			if((col[i] == col[k]) || abs(col[i] - col[k]) == abs(i - k))
				break;
		}
		if(k < i)
			continue;
		if(i == 7 || place(col,(i+1) % 8))
			return TRUE;
	}
	return FALSE;
}