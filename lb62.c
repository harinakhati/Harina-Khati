#include<stdio.h>
int main(){
	int m[3][4],i,j,n[3][4],sum[3][4];
	printf("Enter the array elements of 1st matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&m[i][j]);
		}
	}
	printf("Enter the array elements of 2nd matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&n[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			sum[i][j]=m[i][j]+n[i][j];
		}
	}
	printf("\nSum of matrices:\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\t",sum[i][j]);
		}
	}
	return 0;
}
