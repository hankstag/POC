#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int *collect();
int main(void){

	int *p;
	p = collect();
	int i = 0;
	for(;i < 10;i++)
		printf("%d ",p[i]);
	printf("\n");
	return 0;

}
int *collect(){
	int *string;
	int num;
	scanf("%d",&num);
	char ch;
	int *array = malloc(sizeof(int) * num);
	if(array == NULL)
		return NULL;
	string = array;
	while((ch = getchar()) != EOF){
		if(isdigit(ch))
			*array++ = ch - '0';
	}
	return string;
}