#include<stdio.h>
int main()
{
	FILE *sfp;
	char ch;
	sfp=fopen("D:\\Harina Khati\\student.txt","r");
	if(sfp==NULL)
	{
		printf("File cannot open");
	}
	else{
		printf("File is opened");
	while((ch=fgetc(sfp))!=EOF)
	{
		printf("%c",ch);
	}
		}
	fclose(sfp);
	return 0;
}
