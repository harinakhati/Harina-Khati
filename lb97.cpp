#include<stdio.h>
void sum(int a[]);
int main()
{
	int a[10],i;
	printf("Enter array element:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sum(a);
	return 0;
}
void sum(int a[])
{
	int i,s=0;
	for(i=0;i<10;i++)
	{
		s= s+a[i];
	}
	printf("\nRequired sum=%d",s);
}
