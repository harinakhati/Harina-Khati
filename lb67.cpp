#include<stdio.h>
int main()
{
	int i=0,spcount=0;
	char str[50];
	printf("enter a string:");
	gets(str);
	while(str[i]!='\0'){
		if(str[i]==' ')
		{
			spcount++;
			i++;
		}
		else{
			i++;
		}
	}
	printf("\nNo. of words in string %s=%d",str,spcount+1);
return 0;
}
