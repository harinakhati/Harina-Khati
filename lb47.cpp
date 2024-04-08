#include<stdio.h>
int main()
{
	int i,j,a=0;
	for(i=1;i<11;i++){
		for(j=1;j<=i;j++)
		{
			printf("%d",a%2);
			a++;
			}
			printf("\n");
				}
				return 0;
}
