#include<iostream>
int main()
{
	int sum = (100*101)/2; // (n*(n+1))/2 summtion on n consecutive numbers
	
	int a[100] = {0};
	for(int i =0;i<99;i++)
	{
		a[i]= i + 1;
	}
	for(int i = 0;i<99;i++)
		sum-=a[i];
	std::cout<<sum;
}
