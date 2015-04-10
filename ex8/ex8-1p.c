#include <stdio.h>
#include <string.h>

int main(void){
	unsigned char char_value[3][6][4][5];
	memset(char_value,'\0',sizeof(char_value));
	char_value[1][2][2][3] = 'A';
	char_value[1][1][1][1] = ' ';
	char_value[1][3][2][2] = 0xf3;
	char_value[2][4][3][2] = '3';
	char_value[1][4][2][3] = '\n';
	char_value[2][2][3][1] = '\121';
	char_value[2][4][3][3] = 3;
	char_value[2][5][3][4] = 125;
	char_value[1][2][3][4] = 'x';
	char_value[2][1][1][2] = 0320;
	char_value[2][2][2][2] = '\'';
	char_value[2][2][1][1] = '0';
	printf("char_value[1][2][2][3] : %x\n",char_value[1][2][2][3]);
	printf("char_value[1][1][1][1] : %x\n",char_value[1][1][1][1]);
	printf("char_value[1][3][2][2] : %x\n",char_value[1][3][2][2]);
	printf("char_value[2][4][3][2] : %x\n",char_value[2][4][3][2]);
	printf("char_value[1][4][2][3] : %x\n",char_value[1][4][2][3]);
	printf("char_value[2][2][1][1] : %x\n",char_value[2][2][3][1]);
	printf("char_value[2][4][3][3] : %x\n",char_value[2][4][3][3]);
	printf("char_value[2][5][3][4] : %x\n",char_value[2][5][3][4]);
	printf("char_value[1][2][3][4] : %x\n",char_value[1][2][3][4]);
	printf("char_value[2][1][1][2] : %x\n",char_value[2][1][1][2]);
	printf("char_value[2][2][2][2] : %x\n",char_value[2][2][2][2]);
	printf("char_value[2][2][1][1] : %x\n",char_value[2][2][1][1]);
	printf("char_value[2][5][3][3] : %x\n",char_value[2][5][3][3]);
	return 0;
}