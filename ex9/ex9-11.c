#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

	char buffer[100];
	char buffer_2[100];
	int i = 0,count = 0;
	while((buffer[i++] = getchar()) != EOF);
	// clear the white chars
	i--;
	while(isspace(buffer[--i]) == 1);
	buffer[i + 1] = '\0';
	char *ptr = strtok(buffer," ");
	count = 0;
	//count the number
	while(ptr != NULL){
		if(strcmp(ptr,"the") == 0)
			count++;
		ptr = strtok(NULL," ");
	}
	printf("%d\n",count);
	return 0;
}