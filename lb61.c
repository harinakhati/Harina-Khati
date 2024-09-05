#include<stdio.h>
int main(){
	int m[10][10],a,b,i,j,esum=0,osum=0;
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
			if(m[i][j]%2==0){
				esum=esum+m[i][j];
			}
			else{
				osum=osum+m[i][j];
			}
		}
	}
	printf("\n%d=sum of even\n%d=sum of odd",esum,osum);
	return 0;
}
