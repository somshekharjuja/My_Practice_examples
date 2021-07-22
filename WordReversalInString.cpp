#include<string>
#include<vector>
#include<stack>
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	string s = "hello this is my name som";
	vector <string> tokens;
	stringstream check(s);
	string temp;
	stack<string> s1;
	while(getline(check,temp,' '))
	{
		tokens.push_back(temp);
	}
	
	for(int i=0;i<tokens.size();i++)
	{
		s1.push(tokens[i]);
	}
	while(!s1.empty())
	{
		cout<<s1.top()<<" ";
		s1.pop();
	}
}
