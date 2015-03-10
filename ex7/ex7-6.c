#include <stdio.h>
#include <string.h>
#define BILLION 1000000000
#define MILLION 1000000
#define THOUSAND 1000
#define HUNDRED 100

void written_amount( unsigned int amount, char *buffer );
int main(void){
	unsigned int amount;
	char buffer[300];
	scanf("%d",&amount);
	written_amount(amount,buffer);
	return 0;

}
void written_amount( unsigned int amount, char *buffer ){
	int left = amount;
	int million,million_l,million_r;
	int thousand,thousand_l,thousand_r;
	int hundred;
	int billion = left / BILLION;
	int billion_l = 0;
	char number[100][20];
	int i = 1;
	int units = 0;
	int tens = 0;
	//create the number matrix
	for(i = 1;i < 100;i++){
		units = i % 10;
		tens = i / 10;
		if(tens == 0 || tens == 1){
			switch(i){
				case 1: strcpy(number[i],"ONE");break;
				case 2: strcpy(number[i],"TWO");break;
				case 3: strcpy(number[i],"THREE");break;
				case 4: strcpy(number[i],"FOUR");break;
				case 5: strcpy(number[i],"FIVE");break;
				case 6: strcpy(number[i],"SIX");break;
				case 7: strcpy(number[i],"SEVEN");break;
				case 8: strcpy(number[i],"EIGHT");break;
				case 9: strcpy(number[i],"NINE");break;
				case 10: strcpy(number[i],"TEN");break;
				case 11: strcpy(number[i],"ELEVEN");break;
				case 12: strcpy(number[i],"TWELVE");break;
				case 13: strcpy(number[i],"THIRTEEN");break;
				case 14: strcpy(number[i],"FOURTEEN");break;
				case 15: strcpy(number[i],"FIFTEEN");break;
				case 16: strcpy(number[i],"SIXTEEN");break;
				case 17: strcpy(number[i],"SEVENTEEN");break;
				case 18: strcpy(number[i],"EIGHTEEN");break;
				case 19: strcpy(number[i],"NINETEEN");break;
				default: break;
			}
		}else{
			switch(tens){
				case 2: strcpy(number[i],"TWENTY");break;
				case 3: strcpy(number[i],"THIRTY");break;
				case 4: strcpy(number[i],"FOURTY");break;
				case 5: strcpy(number[i],"FIFTY");break;
				case 6: strcpy(number[i],"SIXTY");break;
				case 7: strcpy(number[i],"SEVENTY");break;
				case 8: strcpy(number[i],"EIGHTY");break;
				case 9: strcpy(number[i],"NINTY");break;
				default: break;
			}
			strcat(number[i],number[units]);
		}
		//printf("%s\n",number[i]);
	}

	left -= billion * BILLION;
	million = left / MILLION;
	million_l = (left / MILLION) / 100;
	million_r = (left / MILLION) % 100;

	left -= million * MILLION;
	thousand = left / THOUSAND;
	thousand_l = (left / THOUSAND) / 100;
	thousand_r = (left / THOUSAND) % 100;

	left -= thousand * THOUSAND;
	hundred = left / HUNDRED;

	left -= hundred * HUNDRED;
	units = left % 10;
	tens = left / 10;

	if(billion != 0){
		printf("%s BILLION ",number[billion]);
		if(hundred == 0 && left == 0 && thousand == 0){
			printf("\n");
		}
	}
	if(million != 0){
		if(million_l != 0){
			printf("%s HUNDRED", number[million_l]);
		}
		printf("%s MILLION ",number[million_r]);
		if(hundred == 0 && left == 0 && thousand == 0){
			printf("\n");
		}
	}
	if(thousand != 0){
		if(thousand_l != 0){
			printf("%s HUNDRED ", number[thousand_l]);
		}
		printf("%s THOUSAND ",number[thousand_r]);
		if(hundred == 0 && left == 0){
			printf("\n");
		}
	}
	if(hundred != 0){
		printf("%s HUNDRED ",number[hundred]);
		if(left == 0){
			printf("\n");
		}
	}
	if(left != 0){
		printf("%s\n", number[left]);
	}
}