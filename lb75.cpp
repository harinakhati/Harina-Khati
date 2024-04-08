#include<stdio.h>
int main()
{
	struct teacher{
		int id;
		char name[20];
		char faculty[30];
		float salary;
		char post[20];
	}t[10];
	int i;
	for(i=0;i<3;i++){
		printf("\nEnter record of teacher is %d",i+1);
		printf("\nEnter the name:");
		gets(t[i].name);
		printf("\nEnter the ID:");
		scanf("%d",&t[i].id);
		printf("\nEnter the salary:");
		scanf("%f",&t[i].salary);
		printf("\nEnter the faculty:");
			fflush(stdin);
		gets(t[i].faculty);
	printf("\nEnter the post:");
	fflush(stdin);
	gets(t[i].post);
	}
	printf("\n........teacher record.....\n");
	printf("name\tID\tFaculty\tsalary\tpost");
	printf("\n...........................");
	for(i=0;i<3;i++){
		printf("\n%s\t\t%d\t%s\t%f\t%s",t[i].name,t[i].id,t[i].faculty,t[i].salary,t[i].post);
			}
			return 0;
}

