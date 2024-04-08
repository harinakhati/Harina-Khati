#include<stdio.h>
int fibo(int n);
int main()
{
	int i,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",fibo(i));
	}
	return 0;
}
int fibo(int n)
{
	if(n==0||n==1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}
