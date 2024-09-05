#include<stdio.h>
int main()
{
	int i,a[50],ecount=0,ocount=0;
	printf("enter the array element:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==0){
		ecount++;
	}
	else{
		ocount++;
	}
}
	printf("\nNo. of even=%d\nNo. of odd=%d",ecount,ocount);
	return 0;
}
