#include<iostream>
using namespace std;

int main()
{
	int num =15;
	int n;
	cin>>n;
	num = num & ~(1<<(n-1));
	cout<<num;
}
