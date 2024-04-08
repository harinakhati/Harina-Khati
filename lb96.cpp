#include<stdio.h>
int main()
{
	int *p, q=500;
	p=&q;
	printf("Address of q=%u",&q);
	printf("\nValue of p=%u",p);
	printf("\nValue of q=%d",q);
	printf("\nValue of the address pointed by p=%d",*p);
	return 0;
}
