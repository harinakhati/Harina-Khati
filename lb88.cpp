#include<stdio.h>
int sum();
int main()
{
	int s;
	s=sum();
	printf("\nRequired sum=%d",s);
	return 0;
}
int sum()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	return a+b;
}
