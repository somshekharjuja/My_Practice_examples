#include<stdio.h>

/*int main()
{
	int x = 11;
	int m=1;
	while((x & m))
	{
		m<<=1;
	}
	x=  (x ^ m);
	printf("Result= %d\n",x);
}*/


int main()
{
	int n =12;
	
	n =  n | (n+1);
	printf("Result= %d\n",n);
}

