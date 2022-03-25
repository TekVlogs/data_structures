/* FIFO */

#include <stdio.h>
#include "queue.h"



int dequeue(struct queue *q1)
{
	if(q1->rear == -1)
	{
		printf("Queue Empty..\n");
	}
	return q1->arr[q1->rear--];

}


void enqueue(struct queue *q1, int data)
{	
	if(q1->front == capacity -1)
	{
		printf("Queue Full..\n");
	}
	q1->arr[++q1->front];
}
