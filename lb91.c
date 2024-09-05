#include<stdio.h>
int factorial(int n);
int main()
{
	int n,f;
	printf("Enter the value of n:");
	scanf("%d",&n);
	f=factorial(n);
	printf("\nFactorial of %d=%d",n,f);
	return 0;
}
int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
}
