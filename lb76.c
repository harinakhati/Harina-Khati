#include<stdio.h>
int main()
{
	struct book{
		int id;
		char title[50];
		float price;
	}b[5];
	int i;
	for(i=0;i<2;i++){
		printf("\nEnter the book record:%d",i+1);
		printf("\nEnter the book id:");
		scanf("%d",&b[i].id);
		printf("\nEnter the title book:");
		fflush(stdin);
		gets(b[i].title);
		printf("\nEnter the price:");
		scanf("%f",&b[i].price);
	}
	printf("\n.......Book record.....\n");
	printf("ID\ttitle\t\tprice");
	printf("\n....................\n");
	for(i=0;i<2;i++)
	{
		if(b[i].price>500)
		{
			printf("\n%d\t%s\t\t%f",b[i].id,b[i].title,b[i].price);
		}
	}
	return 0;
}
