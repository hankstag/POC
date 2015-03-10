#include <stdio.h>

int main(void){

	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if((a + b < c) || (a + c < b) || (b + c < a)){
		printf("不是一个三角形\n");
	}
	else if(a == b && b == c){
		printf("等边三角形\n");
	}else if((a == b) || (b == c) || (a == c))
		printf("等腰三角形\n");
	else
		printf("普通三角形\n");
	return 0;

}