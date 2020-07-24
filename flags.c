#include <stdio.h>
#include <malloc.h>

//getFlag(type,short,long,)

typedef struct Node {
	char *value;
	struct Node *next;
} Node;

//Node *head = NULL;

void push(Node **head, char *data){
	Node *tmp = (Node*) malloc(sizeof(Node));
	tmp->value = data;
	tmp->next = (*head);
	(*head) = tmp;
}

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
