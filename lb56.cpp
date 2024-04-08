#include<stdio.h>
int main()
{
	int a[10],i,esum=0,osum=0;
	printf("enter the array element:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==0){
			esum=esum+a[i];
		}
		else{
			osum=osum+a[i];
		}
		}
		printf("\nesum=%d\nosum=%d",esum,osum);
		return 0;
	}
