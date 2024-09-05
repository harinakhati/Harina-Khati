#include<stdio.h>
int main()
{
	int count=1,x,y,power=1;
	printf("enter the value of x and y:");
	scanf("%d%d",&x,&y);
	while(count<=y)
	{
		power=power*x;
		count++;
	}
	printf("\nvalue of %d raised to power %d=%d",x,y,power);
	return 0;
}
