#include<stdio.h>

typedef void (*sum)(int a, int b);

void add(int a,int b)
{
	printf("Sum = %d\n",a+b);
}
void fun(sum CB,int a ,int b)
{
	CB(a,b);
}
int main()
{
	int a=10,b=20;
	fun(add,a,b);
}
