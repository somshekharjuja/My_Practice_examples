#include<iostream>
using namespace std;

int MinMoves(int* arr, int length)
{
	
	int step = 0,pos =0 ,neg =0 ,zero = 0;
	for(int i=0;i<length;i++)
	{
		if(arr[i] == 0)
		{
			zero++;
		}
		else if(arr[i]<0)
		{
			neg++;
			step = step + (-1 -arr[i]);
		}
		else if(arr>0)
		{
			pos++;
			step =  step +(arr[i] - 1);
		}
	}
	if( neg % 2 == 0)
	{
		step =  step + zero;
	}
	else
	{
		if(zero>0)
		{
			step = step + zero;
		}
		else
		{
			step = step + 2;
		}
	}
	
	return step;
}

int main()
{
	int arr[] = { 0, -2, -1, -3, 4 };
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Minimum moves is "<<MinMoves(arr,size)<<endl;
	return 0;
}
