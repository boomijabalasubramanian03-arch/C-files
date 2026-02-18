#include<stdio.h>
int fibo( int num);
int main()
{
   int i,num,f;
   printf("Enter the number:");
   scanf("%d",&num);
   for (i=0;i<=num;i++)
   {
      f = fibo(i);
      printf("%d\t",f);
   }
   printf("\n");
   return 0;
}
int fibo(int num)
{
   int res=0;
   if (num==0)
   {
      return 0;
   }
   else if (num==1)
   {
      return 1;
   }
   else
   {
      res = fibo(num-1)+fibo(num-2);
      return res;
   }
}