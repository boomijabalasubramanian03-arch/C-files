#include<stdio.h>
int main()
{
   int y,num,rev=0;
   printf("Enter the number:");
   scanf("%d",&num);
   y = num;
   while (num!=0)
   {
      rev = rev*10;
      rev = rev+(num%10);
      num /= 10;
   }
   printf("The number after reversing is %d\n",rev);
   if (y==rev)
   {
      printf("The number %d is a palindrome\n",y);
   }
   else
   {
      printf("The number %d is not a palindrome\n",y);
   }
   return 0;
}