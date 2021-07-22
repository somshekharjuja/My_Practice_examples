#include<stdio.h>
#include<stdlib.h>
typedef struct node_t
{
	int data;
	node_t* next;
}node_t;

void push(node_t** head_ref, int  data)
{
	node_t* temp = (node_t*)malloc(sizeof(node_t));
	temp->data = data;
	temp->next = *head_ref;
	*head_ref = temp;
}

void reverseList(node_t** secondhalf)
{
	node_t*current = *secondhalf;
	node_t*prev =NULL,*next =NULL;
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*secondhalf = prev;
}

int compareList(node_t*firsthalf,node_t* secondhalf)
{
	while(firsthalf!=NULL && secondhalf!=NULL)
	{
		if(firsthalf->data != secondhalf->data)
			return 0;
		firsthalf = firsthalf->next;
		secondhalf = secondhalf->next;
	}
	return 1;
}
int inPalindromicList(node_t* head)
{
	node_t* secondhalf;
	node_t*prev_slow_ptr = NULL;
	node_t* slow_ptr = head;
	node_t* fast_ptr = head;
	node_t* midnode = NULL;
	
	while(fast_ptr!=NULL&&fast_ptr->next!=NULL)
	{
		fast_ptr= fast_ptr->next->next;
		prev_slow_ptr = slow_ptr;
		slow_ptr = slow_ptr->next;
	}
	if(fast_ptr!=NULL)
	{
		midnode = slow_ptr;
		slow_ptr = slow_ptr->next;
	}
	
	secondhalf = slow_ptr;
	prev_slow_ptr->next = NULL;
	reverseList(&secondhalf);
	int res = compareList(head,secondhalf);
	reverseList(&secondhalf);
	
	if(midnode!=NULL)
	{
		prev_slow_ptr->next = midnode;
		midnode->next = secondhalf;
	}
	else
		prev_slow_ptr->next = secondhalf; 
	
	return res;
}

int main()
{
	node_t* head_ref =NULL;
	push(&head_ref,1);
	push(&head_ref,2);
	push(&head_ref,1);
	push(&head_ref,1);
	int res = inPalindromicList(head_ref);
	if(res)
		printf("Linked list is palindorme");
	else
		printf("Linked list is not palindorme");
}
