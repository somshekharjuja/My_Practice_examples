#include<stdio.h>

void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
int main()
{
	int arr[5] = {2,10,6,3,1};
	int min_idx, i,j,n =5;
	for (i=0;i<n-1;i++)
	{
		min_idx = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}
		swap(&arr[min_idx],&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
}
