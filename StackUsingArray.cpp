#include<iostream>
using namespace std;
#define MAX 10
class Stack
{
	int top;
	public:
	int a[MAX];
	Stack(){
		top = -1;
	}
	int pop();
	void push(int data);
	bool isEmpty();
};

void Stack :: push(int data)
{
	if(top == MAX )
	{
		cout<<"stack overflow"<<endl;
		return ;
	}
	a[++top] = data;
	cout<<data<<" pushed into stack"<<endl;
}
int Stack :: pop()
{
	if(top == -1)
	{
		cout<<"Stack underflow"<<endl;
		return -1;
	}
	return a[top--];
}

bool Stack :: isEmpty()
{
	return (top < 0);
}

int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout<< s.pop()<< " popped from satck"<<endl;
	cout<< s.pop()<< " popped from satck"<<endl;
	s.push(6);
	cout<<s.isEmpty()<<endl; 
	cout<< s.pop()<< " popped from satck"<<endl;
	cout<< s.pop()<< " popped from satck"<<endl;
	
}
