#include<stdio.h>
int area(int l,int b)
{
	return l*b;
}
int perimeter(int l,int b){
	return 2*(l+b);
}
int main()
{
	int l,b,a,p;
	printf("Enter the value of l and b:");
	scanf("%d%d",&l,&b);
	a=area(l,b);
	p=perimeter(l,b);
	printf("\nArea=%d and Perimeter=%d",a,p);
	return 0;
}
