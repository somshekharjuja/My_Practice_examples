#include<iostream>
using namespace std;

int main()
{
	int num = 10;
	int n;
	cin>>n;
	num =  num | 1<<n;
	cout<<"after setting "<<num<<endl;
}
