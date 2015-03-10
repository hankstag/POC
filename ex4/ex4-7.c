#include <stdio.h>
#include <string.h>

void deblank( char string[] );
int main(void){

	char a[100] = "hank    shen       han      xiao       ttt s         sss";
	deblank(a);
	printf("%s\n",a);
	return 0;

}
void deblank( char string[]){

	int length = strlen(string);
	int i = 0;
	int j = 0;
	int space = 0;
	for(;i < length;i++){
		if(string[i] == '\0'){
			break;
		}
		if(string[i] == ' '){
			space += 1;
		}
		else if(space > 0){
			for(j = i;j <= length;j++){
				string[j - space + 1] = string[j];
			}
			i = i - space + 1;
			space = 0;
		}
	}
}