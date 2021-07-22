#include<stdio.h>
#include<stdlib.h>

typedef struct node_t
{
	int data;
	struct node_t* next;
}node_t;

void push(node_t** head_ref, int data)
{
	node_t*temp;
	temp = (node_t*)malloc(sizeof(node_t));
	temp->data = data;
	temp->next = *head_ref;
	*head_ref = temp;
}
void reverseList(node_t** head_ref)
{
	node_t* current = *head_ref;
	node_t* prev = NULL;
	node_t* next;
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;
	printf("\n");
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
	node_t* head_ref = NULL;
	push(&head_ref,10);
	push(&head_ref,20);
	push(&head_ref,30);
	push(&head_ref,40);
	push(&head_ref,50);
	printList(head_ref);
	reverseList(&head_ref);
 	printList(head_ref);
}
