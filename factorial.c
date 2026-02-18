#include<stdio.h>
int factorial(int num);
int main()
{
   int num,fact;
   printf("Enter the number:");
   scanf("%d",&num);
   fact = factorial(num);
   printf("The factorial of the number %d is %d\n",num,fact);
   return 0;
}
int factorial(int num)
{
   if(num==0)
   {
      return 1;
   }
   else
   {
      return(num*factorial(num-1));
   }
}