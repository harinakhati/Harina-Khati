#include<stdio.h>
#include<string.h>
int main()
{
	char copy[20],paste[20];
	printf("enter source string:");
	gets(copy);
	strcpy(paste,copy);
	printf("\nThe copied string:%s",paste);
	return 0;
}
