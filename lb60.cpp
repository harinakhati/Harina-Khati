#include<stdio.h>
int main(){
	int m[3][3],i,j,sum=0;
	printf("\nEnter elements of matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				sum=sum+m[i][j];
			}
		}
	}
	printf("\n%d=sum of diagonal element",sum);
	return 0;
}

