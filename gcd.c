#include<stdio.h>
int gcd(int num1,int num2);
int main()
{
   int n1,n2,res;
   printf("ENTER TWO NUMBERS:");
   scanf("%d%d",&n1,&n2);
   res = gcd(n1,n2);
   printf("THE GREATEST COMMON DIVISOR OF THE TWO NUMBERS IS %d\n",res);
   return 0;
}
int gcd(int num1,int num2)
{
   while (num1 != num2)
   {
      if (num1>num2)
      {
         return gcd(num1-num2,num2);
      }
      else
      {
         return gcd(num1,num2-num1);
      }
   }
}
