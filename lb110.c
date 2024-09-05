#include<stdio.h>
int main()
{
	FILE *fp;
	char str[50];
	fp=fopen("D:\\Harina Khati\\test.txt","r");
	if(fp==NULL)
	{
		printf("File cannot open");
	}
	else{
		printf("File is opened");
		fgets(str,20,fp);
		printf("The content of file is :%s",str);
		}
	fclose(fp);
	return 0;
}
