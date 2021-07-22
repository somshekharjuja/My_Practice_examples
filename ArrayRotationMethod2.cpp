#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> array;
void LeftRotateArrayByOne(array& a,int length)
{
	int temp;
	temp = a.at(0);
	for(int i=0;i<length;i++)
	{
		a[i] = a[i+1];
	}
	a[length - 1] = temp;	
}

void rotateArray(array& a,int rotation, int length)
{
	for (int i=0;i<rotation;i++)
	{
		LeftRotateArrayByOne(a,length);
	}
}

void printArray(array& a,int length)
{
	for(int i =0;i<length;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	array a;
	for(int i =1;i<=10;i++)
	{
		a.push_back(i);
	}
	int size = a.size();
	int rotation ;
	cout<<"Enter array rotation by how many elements"<<endl;
	cin>>rotation;
	rotateArray(a,rotation,size);
	printArray(a,size);
}
