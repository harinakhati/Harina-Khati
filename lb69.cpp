#include<stdio.h>
int main()
{
	char str[50],revstr[50];
	int i=0,j=0,len=0;
	printf("enter a string:");
	gets(str);
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	for(i=(len-1);i>=0;i--){
		revstr[j]=str[i];
		j++;
	}
	revstr[j]='\0';
	printf("\nreverse string =%s",revstr);
	return 0;
}
