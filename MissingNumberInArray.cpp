#include<iostream>
using namespace std;

int main()
{
	int array[9] = {1,2,3,4,5,6,7,8,10};
	int sum = ((10 + 1)*10)/2;
	for(int i=0;i<9;i++)
	{
		sum-=array[i];
	}
	cout<<"Missing number is "<<sum<<endl;
}
