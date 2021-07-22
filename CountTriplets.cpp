#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
	unordered_set<int> m;
	int sum = 0,count = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		m.insert(arr[i]);
	}
	for(int i =0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			sum = arr[i] + arr[j];
			if(m.find(sum)!=m.end())
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
}
