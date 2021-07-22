#include<string>
#include<stack>
#include <sstream>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	string line = "my name is khan";
	stringstream s(line);
	string temp;
	stack<string> stacck;
	while(getline(s,temp,' '))
	{
		stacck.push(temp);
	}
	
	while(!stacck.empty())
	{
		cout<<stacck.top()<<endl;
		stacck.pop();
	}

}
