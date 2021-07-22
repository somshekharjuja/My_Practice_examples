#include<stdio.h>
int main()
{
	int array[3][3] = {1,2,3,4,5,6,7,8,9};
	int*p;
	p = array;
	printf("value = %u\n",*p);
	printf("value = %u\n",array);
	printf("value = %u\n",**array);
	p = array[0] + 1;
	printf("value = %u\n",*p);
}
