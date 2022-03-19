#include <stdio.h>
#include "stack.h"




int main(void)
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
        /* cheking underflow condition */
        printf("%d\n",pop(&s1));

	return 0;
}

