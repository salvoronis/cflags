#include <stdio.h>

struct Node {
	char *value;
	struct Node *next;
} Node;

struct Node *head = NULL;
int main(int argc, char * argv[]){
	initFlag(argc,argv);
	int a = 10;
	getFlagLong_int(&a);
	//printf("%d\n",a);
	push(&head, "test");
	push(&head,"anime");
	push(&head,"sheeet");
	int deleting = deleteNodeAfter(&head);
	if (deleting != 1){
		return -1;
	}
	int result = searchNode(head, "test");
	//printf("%d\n",result);
	//printf("first: %s, second: %s\n",head->value,head->next->value);
	return 0;
}
