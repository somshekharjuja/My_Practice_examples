#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
typedef vector<int> vec;


void leftRotateArray(vec & a, int n,int rotation)
{
	int GCD = __gcd(n,rotation);
	int temp =0,j,i,k;
	for(int i =0;i<GCD;i++)
	{
		temp = a[i];
		j = i;
		while(1)
		{
			k = j+rotation;
			if(k>=n)
				k = k- n;
			if(k==i)
				break;
			a[j] = a[k];
			j = k;			
		}
		a[j] = temp;
	}
}
void printArray(vec &a , int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<a[i]<<" "; 
	}
}
int main()
{
	vec array;
	for(int i =1;i<=10;i++)
	{
		array.push_back(i);
	}
	int size = array.size();
	int rotation;
	cout<<"Enter the number of rotations"<<endl;
	cin>>rotation;
	leftRotateArray(array,size,rotation);
	printArray(array,size);
}
