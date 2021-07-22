#include<iostream>
using namespace std;

bool checkForPrime(int n)
{
	bool isPrime = true;
	if(n ==2 )
		return isPrime;
	for(int i=2;i<n;i++)
	{
		if(n % i == 0)
			isPrime =  false;
	}
	return isPrime;
}
int main()
{
	int n;
	while(1)
	{
	cout<<"Enter the number"<<endl;
	cin>>n;
	bool isPrime = checkForPrime(n);
	if(isPrime)
	cout << n << " is a prime number" <<endl;
	else
	cout<< n<< " is not a prime number"<<endl;
	}
}
