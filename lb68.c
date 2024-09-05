#include<stdio.h>
int main()
{
	char str[50];
	int i=0,vcount=0;
	printf("enter a string:");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			vcount++;
			i++;
		}
		else{
			i++;
		}
	}
	printf("\nNo. of vowels in string %s=%d",str,vcount);
	return 0;
}
