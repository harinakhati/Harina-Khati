#include<stdio.h>
int main()
{
	int a[50],n,i,j,temp;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("\nenter the array element:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++){
		for(j=(i+1);j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\narray after sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
