#include<stdio.h>
int main()
{
	struct employee{
		int id;
		char name[15];
		struct dob{
			int day;
			int month;
			int year;
		}d;
		float salary;
	}emp;
	printf("enter employee id:");
	scanf("%d",&emp.id);
	printf("\nenter employee name:");
	fflush(stdin);
	gets(emp.name);
	printf("\nenter the dob:");
	scanf("%d-%d-%d",&emp.d.day,&emp.d.month,&emp.d.year);
	printf("\nenter employee salary:");
	scanf("%f",&emp.salary);
	printf("\nID=%d\nname=%s\ndob=%d-%d-%d\nsalary=%f",emp.id,emp.name,emp.d.day,emp.d.month,emp.d.year,emp.salary);
	return 0;
}
