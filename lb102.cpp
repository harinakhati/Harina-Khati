#include<stdio.h>
struct book{
	int id;
	char title[15];
	float price;
}b[3];
void display(struct book b[]);

int main()
	{
		int i;
		for(i=0;i<3;i++)
		{
		printf("Enter the book id:");
		scanf("%d",&b[i].id);
		printf("\tEnter the book title:");
		fflush(stdin);
		gets(b[i].title);
		printf("\tEnter the price:");
		scanf("%f",&b[i].price);
	}
	printf("\n");
		display(b);
	
		return 0;
	}

	void display(struct book b[])
	{
		int i;
		printf("\nRecord of book is \n");
		for(i=0;i<3;i++){
		printf("\nId =%d\tTitle=%s\tPrice=%f",b[i].id,b[i].title,b[i].price);
	}
	printf("\n");
}

