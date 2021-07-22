#include<stdio.h>
#define MAX 10
int top = -1;
int array[MAX] = {0};
void push(int data)
{
	if(top >= MAX)
	{
		printf("stack overflow\n");
		return;
	}
	array[++top] = data;
}
int pop()
{
	if(top<=-1)
	{
		printf("stack underflow\n");
		return -1;	
	}
	return array[top--];
}
int main()
{
	
	push(1);
	push(2);
	push(3);
	printf("popped value is %d\n",pop());
	printf("popped value is %d\n",pop());
	printf("popped value is %d\n",pop());
	printf("popped value is %d\n",pop());
}
