#include<stdio.h>

int main()
{
	int x =5,y = 5;
	int carry =0 ;
	
	while(y!=0)
	{
		carry = x & y;
		x =  x ^ y;
		y = carry<<1;
	}
	printf("sum is %d\n",x);
}
