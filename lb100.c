#include<stdio.h>
struct book{
	int id;
	char title[15];
	float price;
}b;
void display(struct book b);

int main()
	{
		printf("\nEnter the book id:");
		scanf("%d",&b.id);
		printf("\nEnter the book title:");
		fflush(stdin);
		gets(b.title);
		printf("\nEnter the price:");
		scanf("%f",&b.price);
		display(b);
		return 0;
	}

	void display(struct book b)
	{
		printf("\nRecord of book is \n");
		printf("\nId =%d\nTitle=%s\nPrice=%f",b.id,b.title,b.price);
	}

