#include<stdio.h>
int interest(int p,int t,int r);
int main()
{
	int p,t,r,I;
	printf("enter the value of p,t and r:");
	scanf("%d%d%d",&p,&t,&r);
	I=interest(p,t,r);
	printf("\nsimple interest=%d",I);
	return 0;
}
int interest(int p,int t,int r)
{
	int SI;
	SI=(p*t*r)/100;
	return SI;
}
