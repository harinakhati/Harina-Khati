#include<stdio.h>
int factorial(int x);
int main()
{
	int n,r,f1,f2,f3,c;
	printf("enter the value of n and r:");
	scanf("%d%d",&n,&r);
	f1=factorial(n);
	f2=factorial(n-r);
	f3=factorial(r);
	c=f1/(f2*f3);
	printf("\ncombination c(%d,%d)=%d",n,r,c);
	return 0;
}
int factorial(int x){
	int i,fact=1;
	for(i=1;i<=x;i++){
		fact=fact*i;
	}
	return fact;
}
