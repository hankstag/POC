#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	struct NODE * fwd;
	struct NODE * bwd;
	int value;
}Node;

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

int dll_remove(Node ** head, Node ** tail,Node *p){
	Node *prev = NULL;
	Node *this = *head;
	while(this != NULL){
		if(this == p){
			if(prev == NULL){
				*head = this->fwd;
			}
			else{
				prev->fwd = this->fwd;
			}
			if(this->fwd != NULL)
				this->fwd->bwd = prev;
			else
				*tail = prev;
			free(this);
			return 1;
		}
		prev = this;
		this = this->fwd;
	}
	return 0;
}

int main(void){
	Node ** head = malloc(sizeof(Node *));
	*head = NULL;
	Node ** tail = malloc(sizeof(Node *));
	*tail = NULL;
	int i = 2;
	while(dll_insert(head,tail,i) && i < 10)
		i++;
	Node *ptr = *head;
	Node *select;
	while(ptr != NULL){
		printf("%d ",ptr->value);
		if(ptr->value == 10)
			select = ptr;
		ptr = ptr->fwd;
	}
	printf("\n");

	if(dll_remove(head,tail,select) == 0)
		printf("Delete failed\n");
	else{
		ptr = *tail;
		while(ptr != NULL){
			printf("%d ",ptr->value);
			ptr = ptr->bwd;
		}
		printf("\n");
	}
}