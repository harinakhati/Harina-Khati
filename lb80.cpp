#include<stdio.h>
int main()
{
	int a[50],n,i,l,s;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("\nenter the array element:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	l=a[0];
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(l<a[i]){
			l=a[i];
		}
		if(s>a[i]){
			s=a[i];
		}
	}
	printf("\nlargest=%d and smallest=%d",l,s);
	return 0;
}
