#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> vec;

void rightRotateArrayByOne(vec& array,int size,int rotation)
{
	int temp = array[size-1];
	for (int i=size-1;i>0;i--)
	{
		array[i] = array[i-1];
	}
	array[0] = temp;
}

void rightRotateArray(vec& array, int size,int rotation)
{
	for (int i=0;i<rotation;i++)
	{
		rightRotateArrayByOne(array,size,rotation);
	}
}

void printArray(vec& array,int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
}

int main()
{
	vec array;
	int rotation,size;
	for(int i=1;i<=10;i++)
	{
		array.push_back(i);
	}
	size = array.size();
	cout<<"Enter array rotation "<<endl;
	cin>>rotation;
	rightRotateArray(array,size,rotation);
	printArray(array,size);
}
