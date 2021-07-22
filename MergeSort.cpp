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

node_t* mergeSort(node_t* p, node_t* q, node_t* sorting)
{
	node_t* new_head = NULL;

	if(p == NULL)
	{
		return q;
	}
	else if(q == NULL)
	{
		return p;
	}
	if(p->data <= q->data)
	{
		sorting = p;
		p = sorting->next;
	}
	else
	{
		sorting = q;
		q = sorting->next;
	}
	new_head = sorting;
	while(p && q)
	{
		if(p->data <= q->data)	
		{
			sorting->next = p;
			sorting  = p;
			p = sorting->next;
		}
		else
		{
			sorting->next = q;
			sorting  = q;
			q = sorting->next;
		}
		if(p == NULL)
		{
			sorting->next = q;
		}
		else if(q == NULL)
		{
			sorting->next = p;
		}
	}
	return new_head;
}
void printList(node_t* list)
{
	while(list != NULL)
	{
		printf("%d ",list->data);
		list= list->next;
	}
}
int main()
{
	node_t* a = NULL, *b = NULL,*sorting = NULL;
	push(&a,10);
	push(&a,6); 
	push(&a,5); 
	push(&a,4); 
	push(&a,1); 
	
	push(&b,9);
	push(&b,8); 
	push(&b,7);
	push(&b,3); 	
	push(&b,2); 

	sorting = mergeSort(a,b,sorting);
	printList(sorting);
	
	
}
