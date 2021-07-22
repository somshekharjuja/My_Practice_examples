#include<stdio.h>
#include<string.h>
int main()
{
	int Firmware_Version[3] = {3,4,4};
	char read_response[9] = {0};
	sprintf( (char*)read_response, "%03d.%03d.%03d", Firmware_Version[0], Firmware_Version[1], Firmware_Version[2] );
	printf("readresponse %s\n",read_response);
}
