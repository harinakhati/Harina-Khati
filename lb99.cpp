#include<stdio.h>
void swap (int *, int *);
int main ()
     {
         int a, b;
     printf("\nEnter the value of a and b:");
     scanf("%d%d",&a,&b);
 printf("Before swap, a and b are: %d\t %d", a, b);
 swap(&a,&b);
 printf("\nAfter function calling, a and b are: %d\t%d", a, b);
return 0;
   }
    void swap(int *x, int *y)
{
      int temp;
    temp= *x;
   *x= *y;
    *y= temp;
 }


