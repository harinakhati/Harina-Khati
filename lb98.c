#include<stdio.h>
void square(int a[][5]);
int main()
{
	int a[5][5],i,j;
	printf("\nEnter the element of matrix:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	square(a);
	return 0;
}
void square(int a[][5])
{
	int i,j,s[5][5];
		for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			s[i][j]=a[i][j]*a[i][j];
		}
}
printf("\nThe resultant matrix is :\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
