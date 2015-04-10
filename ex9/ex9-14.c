#include <stdio.h>
#include <ctype.h>

int prepare_key(char *key);
void encrypt(char *data, char const *key);
void decrypt(char *data, char const *key);
int find(char ch,char const *key);

int main(void){
	char key[28] = "TRAILBLAZERS";
	prepare_key(key);
	printf("%s\n",key);
	char data[] = "ATTACK AT DAWN";
	encrypt(data,key);
	printf("%s\n",data);
	decrypt(data,key);
	printf("%s\n",data);
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
		if(init[i] == 0)
			*key++ = i + 'A';
	}
	*key = '\0';
	return 1;
}
void encrypt(char *data, char const *key){
	while(*data != '\0'){
		if(isupper(*data))
			*data = toupper(*(key + *data - 'A'));
		else if(islower(*data))
			*data = tolower(*(key + *data - 'A'));
		data++;
	}
}
void decrypt(char *data, char const *key){
	while(*data != '\0'){
		int i = find(*data,key);
		if(isupper(*data))
			*data = toupper('A' + i);
		else if(islower(*data))
			*data = tolower('a' + i);
		data++;
	}
}
int find(char ch, char const *key){
	int index = 0;
	while(*(key + index) != '\0'){
		if(toupper(ch) == toupper(*(key + index)))
			return index;
		index++;
	}
	return -1;
}