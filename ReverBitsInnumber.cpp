#include<iostream>
using namespace std;

int main()
{
	unsigned int n = 2;
	unsigned int reverse_num = 0;
	unsigned int no_of_bits = sizeof( int) * 8;
	for (int i=0;i<no_of_bits;i++)
	{
		reverse_num|=(1<<((no_of_bits-1) - i));
	}
	cout<<reverse_num<<endl;
}
