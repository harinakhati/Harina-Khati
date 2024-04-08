#include<stdio.h>
int main()
{
	union student{
		int id;
		char name[50];
		char address[50];
		float marks;
	}st;
	   
		printf("\nEnter the student id:");
		scanf("%d",&st.id);
		printf("\nstudent id is %d",st.id);
		printf("\nEnter the student name:");
		fflush(stdin);
		gets(st.name);
	printf("\nstudent name is %s",st.name);
		printf("\nEnter the address:");
		fflush(stdin);
	gets(st.address);
	printf("\naddress of student is %s",st.address);
	printf("\nenter the marks:");
	scanf("%f",&st.marks);
	printf("\nmarks is %f",st.marks);
	return 0;
	}
