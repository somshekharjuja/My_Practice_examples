#include<iostream>
#include<stack>
using namespace std;
class node
{
	public:
	char data;
	node* next;
};

void push(node** head_ref, char data)
{
	node* temp = new node();
	temp->data = data;
	temp->next = *head_ref;
	*head_ref = temp;
}
 bool isPalindromicList(node* head)
{
	stack<char> s;
	node*temp =  head;
	while(temp!=NULL)
	{
		s.push(temp->data);
		temp = temp->next;	
	}
	
	temp = head;
	while(temp!=NULL)
	{
		if(temp->data != s.top())
		{
			return false;
		}
		s.pop();
		temp =  temp->next;
	}
	return true;
}

int main()
{
	node* head_ref =NULL;
	push(&head_ref,'m');
	push(&head_ref,'a');
	push(&head_ref,'m');
	push(&head_ref,'m');
	bool res = isPalindromicList(head_ref);
	if(res)
		cout<<"Linked list is palindorme"<<endl;
	else
		cout<<"linked is not palindrome"<<endl;
}
