#include<stdio.h>
int factorial(int x);
int main()
{
	int n,r,f1,f2,p;
	printf("enter the value of n and r:");
	scanf("%d%d",&n,&r);
	f1=factorial(n);
	f2=factorial(n-r);
	p=f1/f2;
	printf("\npermutation p(%d,%d)=%d",n,r,p);
	return 0;
}
int factorial(int x){
	int i,fact=1;
	for(i=1;i<=x;i++){o
		fact=fact*i;
	}
	return fact;
}


