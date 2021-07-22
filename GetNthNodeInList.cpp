#include<stdio.h>
#include<stdlib.h>
typedef struct node_t
{
	int data;
	struct node_t* next;
}node_t;

void push(node_t** head_ref, int data)
{
	node_t*temp = NULL;
	temp = (node_t*)malloc(sizeof(node_t));
	temp->data = data;
	temp->next = *head_ref;
	*head_ref = temp;
	return ;
}

void getNth(node_t**head_ref,int index)
{
	int i=0;
	node_t* temp = *head_ref;
	for (i = 0; i<index-1;i++)
	{
		temp= temp->next;
	}
	printf("data at %d is %d\n",index,temp->data);
}
int main()
{
	node_t* head_ref = NULL;
	push(&head_ref,10);
	push(&head_ref,20);
	push(&head_ref,30);
	push(&head_ref,40);
	push(&head_ref,50);
	getNth(&head_ref,5);
	
}
