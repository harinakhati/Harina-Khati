#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int d;
	printf("enter string 1:");
	gets(str1);
	printf("enter string 2:");
	gets(str2);
	d=strcmp(str1,str2);
	if(d==0)
	printf("\nBoth string sre same");
	else if(d<0)
	printf("\nstring %s is smaller than string %s",str1,str2);
	else
	printf("\nstring %s is greater than string %s",str1,str2);
return 0;
}
