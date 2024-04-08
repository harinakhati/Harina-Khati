#include<stdio.h>
int main()
{
	int sum=0,i,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<=n;i=i+2)
	{
		sum=sum+i;
	}
	printf("\nsum of even no.=%d",sum);
	return 0;
}
