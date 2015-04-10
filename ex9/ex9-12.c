#include <stdio.h>
#include <ctype.h>

int prepare_key(char *key);
int main(void){
	char key[28] = "TRAILBLAZERS";
	prepare_key(key);
	printf("%s\n",key);
	return 0;
}
int prepare_key(char *key){
	if(key == NULL)
		return 0;
	int init[26] = {0};
	while(*key != '\0'){
		*key = toupper(*key);
		if(init[*key - 'A'] == 1){
			char *tmp = key;
			while(*tmp != '\0'){
				*tmp = *(tmp + 1);
				tmp++;
			}
			continue;
		}
		else{
			init[*key - 'A'] = 1;
		}
		key++;
	}
	int i = 0;
	for(;i < 26;i++){
		printf("%d ",init[i]);
		if(init[i] == 0)
			*key++ = i + 'A';
	}
	*key = '\0';
	printf("\n");
	return 1;
}