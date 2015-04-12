#include <stdio.h>

typedef struct NODE{
	struct NODE * next;
	int value;
}Node;
int countNode(Node *lp);
int main(void){

	Node A,B,C,D,E,F,G;
	A.next = &B;
	A.value = 1;
	B.next = &C;
	B.value = 2;
	C.next = &D;
	C.value = 3;
	D.next = &E;
	D.value = 4;
	E.value = 5;
	E.next = &F;
	F.next = &G;
	F.value = 6;
	G.next = NULL;
	G.value = 7;
	Node * s = &A;
	int x = countNode(s);
	printf("%d\n",x);
	return 0;

}
int countNode(Node *lp){
	int count = 0;
	while(lp != NULL){
		count += 1;
		lp = (*lp).next;
	}
	return count;
}