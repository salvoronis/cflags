#include <stdio.h>
//#include "flags.c"

struct Node {
	char *value;
	struct Node *next;
} Node;

struct Node *head = NULL;
int main(int argc, char * argv[]){
	int a = 10;
	setFlagLong_int(&a);
	printf("%d\n",a);
	push(&head, "test");
	push(&head,"anime");
	push(&head,"sheeet");
	int deleting = deleteNodeAfter(&head);
	int result = searchNode(head, "test");
	printf("%d\n",result);
	printf("first: %s, second: %s\n",head->value,head->next->value);
	return 0;
}
