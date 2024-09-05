#include<stdio.h>
int main()
{
	int count=1;
	do{
		printf("5*%d=%d",count,5*count);
		printf("\n");
		count++;
	}
	while(count<=10);
	return 0;
}
