#include <stdio.h>

typedef struct NODE{
	struct NODE * next;
	int value;
}Node;
Node * findNode(Node *lp,int v);
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
	Node * x = findNode(s,5);
	printf("%d\n",(*x).value);
	return 0;

}
Node * findNode(Node *lp,int value){
	int count = 0;
	while(lp != NULL && (*lp).value < value){
		count += 1;
		lp = (*lp).next;
	}
	if(lp == NULL || (*lp).value > value)
		return NULL;
	else
		return lp;
}