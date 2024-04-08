#include<stdio.h>
void sum();
int main()
{
	sum();
	return 0;
}
void sum()
{
	int a,b,s;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	s=a+b;
	printf("\nSum=%d",s);
}
