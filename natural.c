#include<stdio.h>
int sum(int num);
int main()
{
   int num,total;
   printf("Enter the number:");
   scanf("%d",&num);
   total=sum(num);
   printf("The sum of first n natural numbers is %d\n",total);
   return 0;
}
int sum(int num)
{
   if(num!=0)
   {
      return num+sum(num-1);
   }
   else
   {
      return num;
   }
}
