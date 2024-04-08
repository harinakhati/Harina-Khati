#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("D:\\Harina Khati\\test.txt","a");
	if(fp==NULL)
	{
		printf("File cannot open");
	}
	else{
		printf("File is opened");
		fputs(" in file handling",fp);
	}
	fclose(fp);
	return 0;
}
