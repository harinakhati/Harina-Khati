#include<stdio.h>
#define PI 3.14
void area(float r);
int main()
{
	float r;
	printf("Enter the radius:");
	scanf("%f",&r);
	area(r);
	return 0;
}
void area(float r)
{
	float a;
	a=PI*r*r;
	printf("Area=%f",a);
}
