#include<iostream>
using namespace std;

int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(array)/sizeof(array[0]);
	int rotation = 0;
	cin>>rotation;
	int temp[rotation];
	for (int i =0;i<rotation;i++)
	{
		temp[i] = array[i];
	}
	for (int i = 0;i<size-rotation;i++)
	{
		array[i] = array[ i + rotation];
	}
	for (int i = 0;i<rotation;i++)
	{
		array[size - rotation + i] = temp[i];
	}
	for (int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
}
