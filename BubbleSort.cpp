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
	int array[6] = {7,1,11,8,9,10};
	int i,j,n=6,count1= 0 ,count2 = 0;
	bool swapped = false;
	for (i=0;i<n-1;i++)
	{
		swapped = false;
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				swap(&array[j],&array[j+1]);
				swapped =  true;
			}
		}
		if (swapped == false)
			break;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ", array[i]);
	}
}
