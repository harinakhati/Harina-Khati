#include<stdio.h>
int main()
{
	int a[50],i;
	printf("Enter the integer:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		a[i]=a[i]+10;
		}
		printf("\nresultant array of integer is:\n");
		for(i=0;i<10;i++){
			printf("%d\t",a[i]);
		}
		return 0;
}
