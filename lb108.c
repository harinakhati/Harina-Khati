#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("D:\\Harina Khati\\test.txt","w");
	if(fp==NULL)
	{
		printf("File cannot open");
	}
	else{
		printf("File is opened");
		fputs("This is my first program",fp);
	}
	fclose(fp);
	return 0;
}
