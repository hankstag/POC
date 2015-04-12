#include <stdio.h>
typedef struct{
	float manu_price;
	float sell_price;
	float tax;
	float license_fee;
}FullMoney;

typedef struct{
	float manu_price;
	float sell_price;
	float doun;
	float se_deposit;
	float month_pay;
	int time;
}Rant;

typedef struct{
	float manu_price;
	float sell_price;
	float tax;
	float license_fee;
	int loan_year;
	float in_rate;
	char bank_name[20];
}Loan;

typedef struct{
	char customer_name[21];
	char customer_add[41];
	char model[21];
	union{
		FullMoney * fm;
		Rant * rt;
		Loan * ln;
	}info;
}Record;
int main(void){
	int x = sizeof(Record);
	printf("%d\n",x);
	return 0;
}
