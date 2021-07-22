#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* reverse(char*str,int len)
{
	char* revStr = (char*)malloc(len + 1);
	int i = 0;
	for (i = 0;str[i]!='\0';i++)
	{
		revStr[i] = str[len-i-1];
	}
	revStr[i] = '\0';
	return revStr;
}

int main()
{
	char str[] = "hello";
	int len = strlen(str);
	char* revstr  = reverse(str,len);
	printf("reversed string is %s\n",revstr);
	free(revstr);
}
