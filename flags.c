#include <stdio.h>
#include <malloc.h>

#define TRUE 1
#define FALSE 0

typedef struct Node {
	char *value;
	struct Node *next;
} Node;

void push(Node **head, char *data){
	Node *tmp = (Node*) malloc(sizeof(Node));
	tmp->value = data;
	tmp->next = (*head);
	(*head) = tmp;
}

int searchNode(Node *from, char *data){
	while ((from != NULL)){
		if(from->value == data)
			return TRUE;
		from = from->next;
	}
	return FALSE;
}

int deleteNodeAfter(Node **prevNode){
	Node *tmp = (*prevNode)->next;
	if ((*prevNode)->next->next != NULL){
		(*prevNode)->next = (*prevNode)->next->next;
		free(tmp);
		return 1;
	}
	return 0;
}
//TODO getByValueNode function
//end list part

void initFlag(char *argv[]){	
}

void setFlagLong_int(int *a){
	*a = 3;
}

void setFlagLong_float(float *a){
	*a = 3.0;
}

#define setFlagLong(X)			\
	_Generic((X),			\
	int: setFlagLong_int,		\
	float: setFlagLong_float	\
)(X)
