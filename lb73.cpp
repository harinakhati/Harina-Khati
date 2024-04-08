#include<stdio.h>
int main()
{
	struct employee{
		int id;
		char name[20];
		char post[10];
		float salary;
	};
	struct employee emp;
	printf("enter the employee_name,post,id and salary:");
	scanf("%s%s%d%f",emp.name,emp.post,&emp.id,&emp.salary);
	printf("\nEmployee record is\n");
	printf("\nID=%d\nName=%s\npost=%s\nsalary=%f",emp.id,emp.name,emp.post,emp.salary);
	return 0;
}
