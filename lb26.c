#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number(1-7):");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("\nSunday");
			break;
			case 2:
				printf("\nMonday");
				break;
				case 3:
					printf("\nTuesday");
					break;
					case 4:
						printf("\nWednesday");
						break;
						case 5:
							printf("\nThrusday");
							break;
							case 6:
								printf("\nFriday");
								break;
								case 7:
									printf("\nSaturday");
									break;
									default:
										printf("\nInvalid number");
									}
									return 0;
}

