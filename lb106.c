#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,n,l,s;
	printf("Enter the value of n:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	printf("\Enter the element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	l= *a;
	s= *a;
	for(i=0;i<n;i++){
		if(l< *(a+i)){
			l= *(a+i);
		}
		if(s> *(a+i)){
			s= *(a+i);
		}
	}
	printf("\nlargest=%d and smallest=%d",l,s);
	free(a);
	return 0;
}
