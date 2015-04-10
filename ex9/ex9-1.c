#include <stdio.h>
#include <ctype.h>

int main(void){
	char c = getchar();
	int cc = 0, wc = 0, d = 0, ll = 0, ul = 0, pc = 0, nc = 0;
	int z = EOF;
	while(c != EOF){
		if(iscntrl(c))
			cc++;
		else if(isspace(c))
			wc++;
		else if(isdigit(c))
			d++;
		else if(islower(c))
			ll++;
		else if(isupper(c))
			ul++;
		else if(ispunct(c))
			pc++;
		else if(!isprint(c))
			nc++;
		c = getchar();
	}
	int sum = cc + wc + d + ll + ul + pc + nc;
	const char *names[] = {
		"control character",
		"white character",
		"digit",
		"lowerletter",
		"upperletter",
		"punctletter",
		"non-printable"
	};
	float perc[7];
	perc[0] = 1.0 * cc / sum;
	perc[1] = 1.0 * wc / sum;
	perc[2] = 1.0 * d / sum;
	perc[3] = 1.0 * ll / sum;
	perc[4] = 1.0 * ul / sum;
	perc[5] = 1.0 * pc / sum;
	perc[6] = 1.0 * nc / sum;
	int i = 0;
	printf("----------------------------------\n");
	for(;i < 7;i++){
		printf("%20s : %f\n",names[i],perc[i]);
	}
	return 0;
}