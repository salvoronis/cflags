#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct Node {
	char *name;
	char *value;
	struct Node *next;
} Node;

void push(Node **head, char *data){
	Node *tmp = (Node*) malloc(sizeof(Node));
	char *prt = strtok(data, "=");
	tmp->name = prt;
	prt = strtok(NULL,"=");
	tmp->value = prt;
	tmp->next = (*head);
	(*head) = tmp;
}

int searchNode(Node *from, char *data){
	while ((from != NULL)){
		if(strcmp(data,from->name) == 0){
			return TRUE;
		}
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

Node getByNameNode(Node *start, char *value){
	while (start != NULL) {
		if (strcmp(value, start->name) == 0){
			return *start;
		}
		start = start->next;
	}
	return *start;
}
//end list part
Node *flagList = NULL;

void initFlag(int argc, char *argv[]){
	for(int i = 1; i<argc; i++){
		push(&flagList,argv[i]);
	}
}

void flag_int(int *a, char *flag){
	int isExist = searchNode(flagList, flag);
	if (isExist != 1){
		return;
	}
	Node result = getByNameNode(flagList, flag);
	*a = atoi(result.value);
}

void flag_float(float *a, char *flag){
	int isExist = searchNode(flagList, flag);
	if (isExist != 1){
		return;
	}
	Node result = getByNameNode(flagList, flag);
	*a = atof(result.value);
}

void flag_bool(int *a, char *flag){
	*a = searchNode(flagList, flag);
}

void flag_string(char **a, char *flag){
	int isExist = searchNode(flagList, flag);
	if (isExist != 1){
		return;
	}
	Node result = getByNameNode(flagList, flag);
	*a = result.value;
}

#define setFlagLong(X)			\
	_Generic((X),			\
	int: flag_int,			\
	float: flag_float,		\
	char*: flag_string		\
)(X)
