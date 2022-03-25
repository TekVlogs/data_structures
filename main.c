#include <stdio.h>

#include "stack.h"

#include "list.h"



int main(void)
{
        struct stack s1;
	struct my_list *list = NULL,*tmp ;
        s1.top = -1;
        push(&s1,10);
        push(&s1,20);
        push(&s1,30);
        push(&s1,40);
        printf(" %d\n",pop(&s1));
        printf("%d\n",pop(&s1));
        printf("%d\n",pop(&s1));
        printf("%d\n",pop(&s1));
        /* cheking underflow condition */
        printf("%d\n",pop(&s1));
        for(int i=0; i<100 ; i++)
        {
                insert(&list);
        }
        printfn(&list);



	return 0;
}

