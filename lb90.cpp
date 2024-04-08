#include<stdio.h>
#define PI 3.14
float area(float r);
int main()
{
	float r,a;
	printf("enter the radius:");
	scanf("%f",&r);
	a=area(r);
	printf("\nArea of circle=%f",a);
	return 0;
}
float area(float r)
{
	return PI*r*r;
}
