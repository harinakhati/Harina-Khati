#include<stdio.h>
int main()
{
	char str[15];
	int i=0,len=0;
	printf("enter a string:");
	gets(str);
	while(str[i]!='\0'){
		len++;
		i++;
	}
	printf("\nlength of string=%d",len);
	return 0;
}
