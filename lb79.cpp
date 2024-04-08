#include<stdio.h>
int main()
{
	int a[50],n,i,key;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("\nenter the array element:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter search key:");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==a[i])
		{
			break;
		}
	}
	if(i==n){
		printf("\nsearch failure");
	}
	else{
		printf("\nsearch successful and location=%d",i+1);
		}
		return 0;
}
