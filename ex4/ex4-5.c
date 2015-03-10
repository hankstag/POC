#include <stdio.h>
#include <string.h>

int main(void){

	char a[128];
	char b[128];
	int copy = 0;
	if(fgets(a,sizeof(a),stdin) == NULL){
		printf("File is empty!\n");
		return 0;
	}
	while(fgets(b,sizeof(b),stdin) != NULL){
		if(strcmp(a,b) == 0){
			copy += 1;
			if(copy == 1){
				printf("%s",a);
			}
		}
		else if(copy > 0){
			copy = 0;
			strlcpy(a,b,sizeof(b));
		}
		else{
			strlcpy(a,b,sizeof(b));
		}
	}
	return 0;

}