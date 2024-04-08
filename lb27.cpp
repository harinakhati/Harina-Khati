#include<stdio.h>
int main()
{
	int num,choice;
	printf("1.Check +ve or -ve\n2.Check odd or even");
	printf("\nEnter a number:");
	scanf("%d",&num);
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			if(num>=0)
				printf("\n%d is +ve",num);
			else
			printf("\n%d is -ve",num);
			break;
			case 2:
				if(num%2==0)
				printf("\n%d is even",num);
				else
				printf("\n%d is odd",num);
				break;
				default:
					printf("\nInvalid choice");
	}
	return 0;
}
