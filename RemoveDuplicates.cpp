#include<stdio.h>
#include<stdlib.h>

typedef struct node_t
{
	int data;
	node_t* next;
}node_t;


void push(node_t** head_ref, int data)
{
	node_t* temp = (node_t*)malloc(sizeof(node_t));
	temp->data = data;
	temp->next = *head_ref;
	*head_ref = temp;
}
void RemoveDuplicates(node_t**head_ref)
{
	node_t* current = *head_ref;
	node_t* next_next = NULL;
	while(current->next!=NULL)
	{
		if(current->data == current->next->data)
		{
			next_next = current->next->next;
			free(current->next);
			current->next= next_next;
		}
		else
		{
			current = current->next;
		}
	}
}
void printList(node_t* head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head = head->next;
	}
}
int main()
{
	node_t*head_ref = NULL;
	push(&head_ref,10);
	push(&head_ref,10);
	push(&head_ref,10);
	push(&head_ref,10);
	push(&head_ref,10);
	push(&head_ref,11);
	push(&head_ref,11);
	push(&head_ref,12);
	push(&head_ref,12);
	push(&head_ref,13);
	RemoveDuplicates(&head_ref);
	printList(head_ref);
}
