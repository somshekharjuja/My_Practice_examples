#include<iostream>
using namespace std;

int main()
{
	int num,n;
	while(1)
	{
		cout<<"enter number"<<endl;
		cin>>num;
		cout<<"enter which bit to toggle"<<endl;
		cin>>n;
		num = num ^ (1<<n);
		cout<<"Number after toggling "<<n<<"th bit is "<<num<<endl;
	}
}
