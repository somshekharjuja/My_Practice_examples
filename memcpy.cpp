#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[] = "foo-bar";
	memmove(&str[3],&str[0],4);
	printf("%s\n",str);
}
