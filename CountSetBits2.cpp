#include<stdio.h>
int main()
{
	int n = 7;
	int count = 0;
	while(n)
	{
		n = n & (n-1);
		count++;
	}
	printf("count = %d\n",count);
}
