#include<stdio.h>
void swap(int *x,int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}
int main()
{
   int num1,num2;
   printf("ENTER THE NUMBERS:");
   scanf("%d%d",&num1,&num2);
   swap(&num1,&num2);
   printf("THE NUMBERS AFTER SWAPPING ARE NUM1 = %d,NUM2 = %d\n",num1,num2);
   return 0;
}