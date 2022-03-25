#include <stdio.h>
#include <stdlib.h>


struct my_list{
	int data;
	struct my_list *next;
};




void printfn(struct my_list **list);
void insert(struct my_list **list);

