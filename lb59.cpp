#include<stdio.h>
int main(){
	int m[3][3],i,j,t[3][3];
	printf("\nEnter elements of matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			t[i][j]=m[i][j];
		}
	}

	printf("\nTranspose matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
