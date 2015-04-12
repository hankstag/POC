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
	Node *prev = NULL;
	Node *this = *head;
	while(this != NULL){
		if(this->value > value)
			break;
		else if(this->value == value)
			return 0;
		prev = this;
		this = (prev == NULL) ? NULL : prev->fwd;
	}
	newnode = malloc(sizeof(Node));
	newnode->value = value;
	newnode->fwd = this;
	newnode->bwd = prev;
	if(prev == NULL)
		*head = newnode;
	else
		prev->fwd = newnode;
	if(this == NULL)
		*tail = newnode;
	else
		this->bwd = newnode;
	return 1;
}
int main(void){
	Node ** head = malloc(sizeof(Node *));
	*head = NULL;
	Node ** tail = malloc(sizeof(Node *));
	*tail = NULL;
	int i = 2;
	while(dll_insert(head,tail,i) && i < 10)
		i++;
	Node *ptr = *tail;
	while(ptr != NULL){
		printf("%d\n",ptr->value);
		ptr = ptr->bwd;
	}
}
