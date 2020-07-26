#include <stdio.h>
#include "../flags.h"

struct Node *head = NULL;
int main(int argc, char * argv[]){
	initFlag(argc,argv);
	char* a;
	flag_string(&a,"anime");
	printf("%s\n",a);
	return 0;
}
