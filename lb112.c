#include<stdio.h>
int main()
{
	struct employee
	{
		int id;
		char name[50];
		char post[50];
		float salary;
	}emp[5];
	int i;
	FILE *fp;
	fp=fopen("D:\\Harina Khati\\employee.txt","w");
	for(i=0;i<2;i++)
	{
		printf("\nEnter  the record of employee:%d",i+1);
		printf("\nEnter id ,name,post and salary of employee:");
		scanf("%d%s%s%f",&emp[i].id,emp[i].name,emp[i].post,&emp[i].salary);
	}
	for(i=0;i<2;i++)
	{
		fprintf(fp,"ID=%d\tName=%s\tPost=%s\tSalary=%f",emp[i].id,emp[i].name,emp[i].post,emp[i].salary);
	}
fclose(fp);
fp=fopen("D:\\Harina Khati\\employee.txt","r");
for(i=0;i<2;i++){
	fscanf(fp,"%d%s%s%f",&emp[i].id,emp[i].name,emp[i].post,&emp[i].salary);
}
	printf("\nRecord of employee:%d",i+1);
	for(i=0;i<2;i++){
	printf("\nID=%d\tName=%s\tPost=%s\tSalary=%f",emp[i].id,emp[i].name,emp[i].post,emp[i].salary);
}
fclose(fp);
return 0;
}
