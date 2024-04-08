#include<stdio.h>
int sum(int n);
int main()
{
	int n,s;
	printf("Enter the value of n:");
	scanf("%d",&n);
	s=sum(n);
	printf("\nsum of %d=%d",n,s);
	return 0;
}
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
