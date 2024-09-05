#include<stdio.h>
int main()
{
	int n,count=0,rem;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		count++;
		n=n/10;
	}
	printf("no. of digits is %d",count);
	return 0;
}
