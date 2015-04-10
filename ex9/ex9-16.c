#include <stdio.h>
#include <string.h>

int format(char *format_string, char const *digit_string);
int main(void){
	char f[10][15] = {
		"#####",
		"#####",
		"##,###",
		"##,###",
		"##,###",
		"#,###,###.##",
		"#,###,###.##",
		"#,###,###.##",
		"#,###,###.##",
		"#####.#####"
	};
	char *d[] ={
		"12345",
		"123",
		"1234",
		"123",
		"1234567",
		"123456789",
		"1234567",
		"123",
		"1",
		"1"
	};
	int i = 0;
	for(;i < 10;i++){
		format(f[i],d[i]);
		printf("%s\n",f[i]);
		
	}
	return 0;
}
int format(char *format_string, char const *digit_string){
	char *dst = format_string + strlen(format_string) - 1;
	char const *src = digit_string + strlen(digit_string) - 1;
	while(src >= digit_string){
		if(dst < format_string)
			break;
		if(*dst == '#'){
			*dst = *src--;
			dst--;
		}
		else if(*dst == '.' || *dst == ','){
			dst--;
			continue;
		}
	}
	char front[100];
	char *ant;
	if(dst < format_string)
		return 1;
	strncpy(front,format_string,(int)(dst - format_string + 1));
	if((ant = strchr(front,'.')) == NULL){
		while(dst >= format_string){
			if(*dst == ',')
				*dst = ' ';
			else if(*dst == '#')
				*dst = ' ';
			dst--;
		}
	}
	else{
		char *tmp = (ant - front) + format_string;
		*(tmp - 1) = '0';
		tmp++;
		while(tmp <= dst)
			*tmp++ = '0';
		tmp = (ant - front) + format_string - 1;
		while(--tmp >= format_string)
			*tmp = ' ';
	}
	return 1;

}