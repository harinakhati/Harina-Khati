#include<stdio.h>
int main()
{
	int a[10],i,pcount=0,ncount=0,zcount=0;
	printf("enter the array element:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]>0){
			pcount++;
		}
		else if(a[i]<0){
			ncount++;
		}
		else{
			zcount++;
		}
	}
	printf("\nNo. of +ve=%d\nNO. of -ve=%d\nNo. of zero=%d",pcount,ncount,zcount);
	return 0;
}
