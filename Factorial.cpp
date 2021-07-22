#include<iostream>
using namespace std;

int main()
{
	int n,count=0;
	long long fact = 1;
	cout<<"enter number"<<endl;
	cin>>n;
	for(int i =1;i<=n;i++)
	{
		fact= fact*i;
	}
	cout<<"factorial of "<<n<<" is "<<fact<<endl;
	while(fact % 10 == 0)
	{
		fact = fact/10;
		count++;
	}
	cout<<"total trailing zeroes are "<<count<<endl;
}
