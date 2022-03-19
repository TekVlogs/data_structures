/* Element could be added or deleted only at top of stack */

/* LIFO (last in first out) */

/* push for insertion  and pop for deletion */

/* stack overflow push rejected stack underflow pop operation rejected */



#include <stdio.h>


#include "stack.h"


void push(struct stack *s_o , int data)
{
	if(s_o->top == SIZE - 1 )
	{
		printf("Stack overflow..\n");
		return;
	}
	s_o->arr[++s_o->top] = data;



}

int pop(struct stack *s_o)
{
	if(s_o->top == -1)
	{
		printf("Stack underflow..\n");
		return -1;
	}
	return s_o->arr[s_o->top--];


}

/*
void main(void)
{
	struct stack s1;
	s1.top = -1;
	push(&s1,10);
	push(&s1,20);
	push(&s1,30);
	push(&s1,40);
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	// cheking underflow condition 
	
	//printf("%d\n",pop(&s1));


} */

