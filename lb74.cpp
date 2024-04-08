#include<stdio.h>
int main()
{
	struct student{
		int id;
		char name[20];
		char faculty[30];
		float marks;
	}st[10];
	int i;
	for(i=0;i<3;i++){
		printf("\nEnter record of student is %d",i+1);
			printf("\nEnter the name:");
		gets(st[i].name);
		printf("\nEnter the ID:");
		scanf("%d",&st[i].id);
		printf("\nEnter the marks:");
		scanf("%f",&st[i].marks);
		printf("\nEnter the faculty:");
			fflush(stdin);
		gets(st[i].faculty);
	
	}
	printf("\n........student record.....\n");
	printf("name\tID\tFaculty\tmarks");
	printf("\n...........................");
	for(i=0;i<3;i++){
		printf("\n%s\t\t%d\t%s\t%f",st[i].name,st[i].id,st[i].faculty,st[i].marks);
			}
			return 0;
}
