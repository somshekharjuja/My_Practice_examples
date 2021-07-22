#include<iostream>
#include<stack>

using namespace std;

bool checkForBalancedExpression(string& exp)
{
	stack<char> s;
	char ch;
	for(int i=0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{' )
		{
			s.push(exp[i]);
			continue;
		}
		if(s.empty())
			return false;
		
		switch(exp[i])
		{
			case ')':
			ch = s.top();
			s.pop();
			if(ch == '{' || ch == '[')
				return false;
			break;
			
			case '}':
			ch = s.top();
			s.pop();
			if(ch == '(' || ch == '[')
				return false;
			break;
			
			case ']':
			ch = s.top();
			s.pop();
			if(ch == '{' || ch == '(')
				return false;
			break; 
		}
	}
	return s.empty();
}
int main()
{
	string expression = "(){{{[]()}}}";
	bool isBalanced = checkForBalancedExpression(expression);
	isBalanced ? cout<< "balanced" : cout<< "Not Balanced"<<endl;
}
