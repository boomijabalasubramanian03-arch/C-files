#include<stdio.h>
int main()
{
   int i,j,num;
   printf("Enter the limit:");
   sacnf("%d",&num);
   for (i=1;i<=num;i++)
   {
      for (j=1;j<=num;j++)
      {
         printf("%d",j);
      }
      printf("n");

   }
   return 0;
}