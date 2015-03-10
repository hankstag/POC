#include <stdio.h>
#include <stdarg.h>

int my_print(const char *args, ...);
int main(void){

	my_print("I am good boy at %d years old, my name is %s.\n",22,"Hank Shen");
	return 0;
}
int my_print(const char *args, ...){
	va_list v_args;
	int count = 0;
	int i = 0;

	char *string;
	int integer;
	double fpoint;
	int character;

	va_start(v_args,args);
	while(*args != '\0'){
		if(*args == '%'){
			if(count >= 256) //太多参数
				return -1;
			switch(*++args){
				case 'd':
					integer = va_arg(v_args,int);
					printf("%d",integer);
					break;
				case 'f':
					fpoint = va_arg(v_args,double);
					printf("%lf",fpoint);
					break;
				case 's':
					string = va_arg(v_args,char*);
					while(*string != '\0')
						putchar(*string++);
					break;
				case 'c':
					character = va_arg(v_args,int);
					putchar(character);
					break;
				default :
					break;
			}	
			count += 1;
			args += 1;
		}
		else if(*args == '\\'){
			switch(*++args){
				case 'n':
					printf("\n");
					break;
			}

		}
		else{
			putchar(*args++);
		}
	}
	va_end(v_args);
	return 0;
}