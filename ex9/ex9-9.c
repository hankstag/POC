#include <stdio.h>
#include <string.h>

int count_chars(char const *str, char const *chars);
int main(void){
	char const b[] = "abce";
	char const a[] = "Hi Andy, my name is Hank. Really nice to meet you.";
	int z = count_chars(a,b);
	printf("%d\n",z);
	return 0;
}
int count_chars(char const *str, char const *chars){
	int len = strlen(chars);
	int i = 0,count = 0;
	char const * tmp;
	for(;i < len;i++){
		tmp = strchr(str,chars[i]);
		while(tmp != NULL){
			count += 1;
			tmp = strchr(tmp + 1,chars[i]);
		}
	}
	return count;
}