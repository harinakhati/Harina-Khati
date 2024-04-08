#include<stdio.h>
int main()
{
	int a,b;
	int choice;
	printf("1:Addition\n2:Subtraction\n3:Product\n4:Division");
	printf("\nEnter two num:");
	scanf("%d%d",&a,&b);
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nSum=%d",a+b);
			break;
			case 2:
				printf("\nDifference=%d",a-b);
				break;
				case 3:
					printf("\nProduct=%d",a*b);
					break;
					case 4:
						printf("\nDivision=%d",a/b);
						break;
						default:
							printf("\ninvalid choice");
							}
							return 0;
}
