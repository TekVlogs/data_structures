

#define SIZE 4
struct stack 
{
	int arr[SIZE];
	int top;
};


void push(struct stack *s, int data);
int pop(struct stack *s);
