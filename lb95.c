#include<stdio.h>
void swap(int a,int b);
int main()
{
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d%d",&a,&b);
	printf("\nBefore swap a=%d and b=%d",a,b);
	swap(a,b);
	return 0;
}
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swap: a=%d and b=%d",a,b);
}
