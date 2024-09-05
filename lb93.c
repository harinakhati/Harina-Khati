#include<stdio.h>
int product(int,int);
int main()
{
	int a,b,p;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	p=product(a,b);
	printf("\nproduct of %d and %d=%d",a,b,p);
	return 0;
}
int product(int a,int b){
	if(b==0)
	return 0;
	else
	return a+product(a,b-1);
}
