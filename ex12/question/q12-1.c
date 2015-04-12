while(*linkp != NULL && (*linkp)->value <= new_value){
	linkp = &((*linkp)->link);
}
newnode = malloc(sizeof(NODE));
newnode->link = *linkp;
newnode->value = new_value;
*linkp = newnode;