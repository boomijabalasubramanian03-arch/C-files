#include<stdio.h>
void swap(int *, int *);
int main()
{
   int n1,n2;
   printf("Enter two numbers:");
   scanf("%d%d",&n1,&n2);
   swap(&n1,&n2);
   printf("After swapping , the values are %d,%d\n",n1,n2);
   return 0;
}
void swap(int*x,int*y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}