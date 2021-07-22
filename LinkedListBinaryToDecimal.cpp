#include<stdio.h>
#include<stdlib.h>
typedef struct node_t
{
	int data;
	node_t* next;
}node_t;

void push(node_t**head_ref,int data)
{
	node_t* temp = (node_t*)malloc(sizeof(node_t));
	temp->data = data;
	temp->next = *head_ref;
	*head_ref = temp;
}
int BinaryToDecimal(node_t*head)
{
	node_t* temp =  head;
	int res =0;
	while(temp!=NULL)
	{
		res = (res*2 ) + temp->data;
		temp = temp->next;
	}
	return res;
}
int main()
{
	node_t *head  = NULL;
	push(&head,1);
	push(&head,1);
	push(&head,1);
	push(&head,0);
	push(&head,0);
	push(&head,0);
	push(&head,0);
	printf("%d ", BinaryToDecimal(head));
}
