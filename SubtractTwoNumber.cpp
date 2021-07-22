#include<stdio.h>

int main()
{
	int x =10,y = 5;
	int borrow =0 ;
	
	while(y!=0)
	{
		borrow = ~(x) & y;
		x =  x ^ y;
		y = borrow<<1;
	}
	printf("differnence is %d\n",x);
}
