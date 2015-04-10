#include <stdio.h>
#include <ctype.h>
#include <string.h>

int palindrome(char *string);
int main(void){

	char a[] = "abcdegGedcba";
	int r = palindrome(a);
	printf("%d\n",r);
	return 0;

}
int palindrome(char *string){
	char *head = string;
	char *tail = string + strlen(string) - 1;
	while(head++ <= tail--){
		if(tolower(*head) != tolower(*tail))
			return 0;
	}
	return 1;
}