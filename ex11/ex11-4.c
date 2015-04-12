#include <stdio.h>
typedef struct NODE{
	int num;
	struct NODE * n;
}node;

int main(void){
	node A;
	node B;
	node C;
	node D;
	node * head;
	head = &A;
	A.n = &B;
	A.num = 5;
	B.n = &C;
	B.num = 10;
	C.n = &D;
	C.num = 15;
	D.n = NULL;
	D.num = 20;
	int a = A.num;
	int b = B.num;
	int c = A.n->n->num;
	printf("%d %d %d\n",a,b,c);
}