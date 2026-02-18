#include<stdio.h>
int main()
{
   int num,y,sum = 0,rev =0;
   printf("Enter the number:");
   scanf("%d",&num);
   y = num;
   while (num>0)
   {
      rev = num%10;
      sum = sum+(rev*rev*rev);
      num /= 10;
   }
   if (y==sum)
   {
      printf("The number %d is an armstrong number\n",y);
   }
   else
   {
      printf("The number %d is not an armstrong number\n",y);
   }
   return 0;
}