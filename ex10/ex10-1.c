#include <stdio.h>
typedef struct{
	char date[8];
	char time[6];
}Timestamp;
typedef struct{
	char district[3];
	char exchange[3];
	char number[10];
}Phone;
typedef struct{
	Timestamp * begin;
	Timestamp * end;
	Phone * phone_in_use;
	Phone * phone_called;
	Phone * phone_pay;
}Record;

int main(void){
	int x = sizeof(Record);
	printf("%d\n",x);
	return 0;
}