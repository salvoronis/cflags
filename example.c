#include <stdio.h>
//#include "flags.c"

typedef struct Node {
	char *value;
	struct Node *next;
} Node;

struct Node *head = NULL;
int main(int argc, char * argv[]){
	int a = 10;
	setFlagLong_int(&a);
	printf("%d",a);
	push(&head,"anime");
	push(&head,"sheeet");
	printf("%s",head->value);
	return 0;	
}
