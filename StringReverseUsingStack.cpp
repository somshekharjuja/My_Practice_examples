#include<stack>
#include<iostream>

using namespace std;

int main()
{
	string str = "hello world";
	string rev;
	stack<char> st;
	for(int i =0;i<str.length();i++)
	{
		st.push(str.at(i));
	}
	while(!st.empty())
	{
		rev.append(1,st.top());
		st.pop();
	}
	cout<<rev;
}

