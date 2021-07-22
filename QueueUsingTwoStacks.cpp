#include<iostream>
#include<stack>
using namespace std;

class Queue
{
	private:
	stack<int> s1;
	stack<int> s2;
	public:
	Queue(){}
	void enqueue(int data);
	int dequeue(void);
		
};
void Queue::enqueue(int data)
{
	s1.push(data);
}

int Queue::dequeue()
{
	if(s2.empty())
	{
		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		
		}
	}	
	int data = s2.top();
	s2.pop();
	cout<<"dequeueing = "<<data<<endl;
	return data;	
}
int main()
{
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
}
