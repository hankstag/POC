//Wrong version for dll_insert.
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	struct NODE * fwd;
	struct NODE * bwd;
	int value;
}Node;
int dll_insert(Node ** head, Node ** tail, int value);
int dll_insert(Node ** head, Node ** tail, int value){

	Node *newnode;
	Node *this = *head;
	Node *next = this;
	while(this != NULL && (next = this->fwd) != NULL){
		if(next->value > value)
			break;
		else if(next->value == value)
			return 0;
		this = next;
	}
	newnode = malloc(sizeof(Node));
	newnode->value = value;
	newnode->fwd = next;
	newnode->bwd = this;
	if(next != NULL)
		next->bwd = newnode;
	else
		*tail = newnode;
	if(this != NULL)
		this->fwd = newnode;
	else
		*head = newnode;
	return 1;
}
int main(void){
	Node ** head = malloc(sizeof(Node *));
	*head = NULL;
	Node ** tail = malloc(sizeof(Node *));
	*tail = NULL;
	int i = 20;
	while(dll_insert(head,tail,i) && i > 19)
		i--;
	Node *ptr = *head;
	while(ptr != NULL){
		printf("%d\n",ptr->value);
		ptr = ptr->fwd;
	}
}
