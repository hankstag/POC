#include <stdio.h>
#include <string.h> 

int del_substr(char *str, char const *substr);
int main(void){
	char x[100] = "ABCDEFG";
	char y[100] = "CDE";
	int z = del_substr(x,y);
	return 0;
}
int del_substr(char *str,char const *substr){
	char *test = (char *)substr;
	char *des = str;
	int in = 0;
	int i = 0, length = 0,length_des = 0;
	length = strlen(substr);
	while(*des != '\0'){
		for(i = 0;i < length;i++){
			if(*(test + i) != *(des + i))
				break;
		}
		if(i == length){
			in = 1;
			break;
		}
		test = (char *)substr;
		des += 1;
	}
	if(in == 0)
		return 0;
	else{
		//复制字符串－－while( *str++ = *next++ );
		while(*des != '\0'){
			*des = *(des + length);
			des++;
		}
		printf("%s\n",str);
		return 1;
	}

	
}