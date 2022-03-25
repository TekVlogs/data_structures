#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void printfn(struct my_list **list)
{
	struct my_list *tmp;
	 while( *list != NULL)
         {
		printf("%d\n",(*list)->data);
         	tmp = (*list)->next;
                free(*list);
                *list = tmp;

         }

}


void insert(struct my_list **list)
{

	struct my_list *tmp;
	static int i=0;
	if(*list == NULL)
	{
		*list = (struct my_list *)malloc(sizeof(struct my_list));
		tmp = *list;
		(*list)->data = i;
		(*list)->next = NULL;

	}
	else
	{	
		while((*list)->next != NULL)
		{
			*list=(*list)->next;
		}

		(*list)->next = (struct my_list *)malloc(sizeof(struct my_list));
        	(*list)->next->data = ++i;
	}

	*list = tmp;	

}

