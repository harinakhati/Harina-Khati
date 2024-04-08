#include<stdio.h>
int main(){
	int m[10][10],a,b,i,j,sum=0;
	printf("Enter the order of matrix:");
	scanf("%d%d",&a,&b);
	printf("\nEnter elements of matrix:");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			sum=sum+m[i][j];
		}
	}
	printf("\nRequired sum=%d",sum);
	return 0;
}
