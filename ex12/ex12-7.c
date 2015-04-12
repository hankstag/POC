#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct NODE{
	struct NODE * down;
	char *content;
}Node;

typedef struct TITLE{
	char alpha;
	struct TITLE * next_title;
	Node * words;
}Title;


int insert(Title ** dic,char *);

int main(void){
	Title * ptr = malloc(sizeof(Title));
	int i = 0;
	Title **dic;
	dic = malloc(sizeof(Title *));
	*dic = ptr;
	while(i < 26){
		
		ptr->alpha = i + 'A';
		ptr->words = NULL;
		if(i == 25)
			ptr->next_title = NULL;
		else
			ptr->next_title = malloc(sizeof(Title));
		ptr = ptr->next_title;
		i += 1;
	}
	insert(dic,"am");
	insert(dic,"at");
	insert(dic,"boys");
	printf("%s\n",(*dic)->words->down->content);
	return 0;
}
int insert(Title ** dic, char *word){
	char x;
	if(strlen(word) == 0)
		return 1;
	else
		x = word[0]; 
	Title * list = *dic;
	while(list != NULL){
		if(list->alpha == toupper(x))
			break;
		list = list->next_title;
	}
	if(list == NULL)
		return 0;
	else{//get correct list
		Node *prev = list->words;
		Node *this = prev;
		while(this != NULL && strcmp(this->content,word) < 0){
			prev = this;
			this = this->down;
		}
		Node * newnode = malloc(sizeof(Node));
		int len = strlen(word);
		newnode->content = malloc(sizeof(char) * len + 1);
		strcpy(newnode->content,word);
		newnode->down = this;
		if(prev == NULL)
			list->words = newnode;
		else
			prev->down = newnode;
		return 0;
	}
}
