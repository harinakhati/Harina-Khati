#include<stdio.h>
int main()
{
	FILE *fp;
	char name[50];
	int roll;
	float marks;
	fp=fopen("D:\\Harina Khati\\test.txt","r");
	printf("\nEnter the name:");
	gets(name);
	printf("\nEnter the roll no:");
	scanf("%d",&roll);
	printf("\nEnter the marks:");
	scanf("%f",&marks);
		if(fp==NULL)
	{
		printf("File cannot open");
	}
	else{
		printf("File is opened");
		fprintf(fp,"Name=%s\tRoll No=%d\tMarks=%f",name,roll,marks);
			}
	fclose(fp);
	return 0;
}
