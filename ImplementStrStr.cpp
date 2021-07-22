#include<stdio.h>

char* StrStr(char* str, char*substr)
{
	while(*str)
	{
		char*begin = str;
		char* pattern = substr;
		
		while(*str && *pattern && *str == *pattern )
		{
			str++;
			pattern++;
		}
		if(!*pattern)
		{
			return begin;
		}
		str = begin +1;
	}
	return NULL;
}
int main()
{
	char str[] = "geeksforgeeks";
	char substr[] = "b";
	char* p = StrStr(str,substr);
	printf("%s ",p);
}
