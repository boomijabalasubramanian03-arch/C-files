#include<stdio.h>
int sumld( int num1,int num2);
int main()
{
   int i,n1,n2;
   printf("ENTER TWO NUMBER:");
   scanf("%d%d",&n1,&n2);
   i = sumld(n1,n2);
   printf("THE SUM OF 2nd LAST DIGITS IS :%d\n",i);
   return 0;
}
int sumld( int num1,int num2)
{
   int r1,r2,sum=0;
   r1 = (num1/10)%10;
   r2 = (num2/10)%10;
   sum += r1+r2;
   return sum;
}
