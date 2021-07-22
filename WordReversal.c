#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "my name is somshekhar";
	char* token = strtok(str," ");
	while(token!=NULL)
	{
		printf("%s ",strrev(token));
		token =strtok(NULL," ");
	}
}
