#include<iostream>

using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int max_index = n-1;
	int min_index = 0;
	int max_element = arr[n-1] + 1;
	
	for(int i=0;i<n;i++)
	{
		if(i %2 == 0)
		{
			arr[i] += (arr[max_index] % max_element )* max_element;
			max_index--;
		}
		else
		{
			arr[i] += (arr[min_index] % max_element )* max_element;
			min_index++;
		}
	}
	for(int i=0;i<n;i++)
	{
		arr[i] = arr[i] /max_element;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
}
