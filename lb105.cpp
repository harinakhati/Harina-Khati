#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,n,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++){
		sum= sum+ *(a+i);
	}
	printf("\nRequired sum=%d",sum);
	free(a);
	return 0;
}
