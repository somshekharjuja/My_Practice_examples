#include<iostream>
using namespace std;

int main()
{
	int totalElements,sum=0,tempSum =0;
	cout<<"Enter the total elememts in array and sum"<<endl;
	cin>>totalElements>>sum;
	int array[totalElements] = {0};
	cout<<"enter array elements"<<endl;
	for(int i=0;i<totalElements;i++)
	{
		cin>>array[i];
	}
	for(int i =0;i<totalElements;i++)
	{
		tempSum =array[i];
		for(int j=i+1;j<totalElements-1;j++)
		{
			tempSum += array[j];
			if(tempSum == sum)
			{
				cout<<"starting index = "<<i+1<<" and ending index = " <<j+1<<endl;
				return 0;
			}
			else if (tempSum > sum)
			{
				break;
			}
		}
	}
	cout<<"No match found"<<endl;
}

