#include<stdio.h>

int main()
{
	int num = 0;
	char* str = "001001";
	int i =0;
	while(str[i]!='\0')
	{
		num = 2 * num + (str[i] -'0');
		i++;
	}
	printf("%d\n",num);
}
