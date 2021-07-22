#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr1[] = {1,3,5,7,9,10};
	int arr2[] = {2,4,6,8};
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	int i = n1-1;
	int j = 0;
	while(i>=0 && j<n2)
	{
		if(arr1[i]>=arr2[j])
		{
			swap(arr1[i],arr2[j]);
			i--;
			j++;
		}
		else
		{
			i--;
		}
	}
	sort(arr1,arr1+n1);
	sort(arr2,arr2+n2);
	
	cout<<"first array"<<endl;
	for(int i=0;i<n1;i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<endl<<"Second array"<<endl;
	for(int i=0;i<n2;i++)
	{
		cout<<arr2[i]<<" ";
	}
}
