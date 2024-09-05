#include<stdio.h>
int main()
{
	float marks[36],sum=0,avg;
	printf("enter the marks:");
	for(int i=0;i<7;i++){
		scanf("%f",&marks[i]);
		sum=sum+marks[i];
	}
	avg=sum/7;
	printf("\navg=%f",avg);
	return 0;
}
