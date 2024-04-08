#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("%d\t",i);
		if(i==5){
			break;
		}
	}
	return 0;
}
