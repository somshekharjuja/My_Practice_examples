#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int max_xor = 0, XOR = 0;
	for(int i=0;i<size;i++)
	{
		for(int j =i+1;j<size;j++)
		{
			XOR = arr[i] ^ arr[j];
			if(max_xor < XOR)
			{
				max_xor =  XOR;
			}
		}
	}
	cout<<max_xor<<endl;
}
