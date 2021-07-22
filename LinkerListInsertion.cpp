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
void printList(node_t* list)
{
	while(list != NULL)
	{
		printf("%d ",list->data);
		list= list->next;
	}
}
void insertAtEnd(node_t* prev_node,int data)
{
	node_t* temp = prev_node;
	while(temp != NULL)
	{
		temp = temp->next;
	}
	temp = (node_t*)malloc(sizeof(node_t));
	temp->data = data;
	temp->next = NULL;
}
int main()
{
	node_t* head = NULL;
	push(&head,10);
	push(&head,20);
	//insertAtEnd(head,20);
	printList(head);
	
}
