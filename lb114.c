#include<stdio.h>
int main()
{
	FILE *sfp, *dfp;
	char ch;
	sfp=fopen("D:\\Harina Khati\\copy.txt","r");
	if(sfp==NULL)
	{
		printf("File cannot open");
	}
	dfp=fopen("D:\\Harina Khati\\paste.txt","w");
	if(dfp==NULL)
	{
		printf("File cannot open");
	}
	else{
		printf("File is opened");
	while((ch=fgetc(sfp))!=EOF)
	{
	fputc(ch,dfp);
	}
		}
	fclose(sfp);
	fclose(dfp);
	return 0;
}
