#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,n,temp,j;
	printf("Enter the value of n:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	printf("\nEnter the element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<(n-1);i++){
		for(j=i+1;j<n;j++)
		{
			if(*(a+i)< *(a+j)){
			temp= *(a+i);
			*(a+i)= *(a+j);
			*(a+j)= temp;	
			}
		}
		}
		printf("\nSorted list is \n");
	for(i=0;i<n;i++){
		printf("%d\t", *(a+i));
	}
	
	
	free(a);
	return 0;
}
