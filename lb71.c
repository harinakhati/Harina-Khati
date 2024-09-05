#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10]="Harina";
	char str2[10]="Khati";
	strcat(str1,str2);
	printf("\nThe concatenated string=%s",str1);
	return 0;
}
