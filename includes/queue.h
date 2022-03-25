

#define SIZE 10

struct queue
{
	int arr[SIZE];
	int capacity;
	int front,rear,size;

}

void enqueue(struct queue *q1,int data);
int dequeue(struct queue *q1);

