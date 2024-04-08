#include<stdio.h>
int main()
{
	char str[15]={'p','a','d','m','a',' ','k','a','n','y','a','\0'};
	int i=0;
	printf("\nThe string is \n");
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}
	return 0;
}
