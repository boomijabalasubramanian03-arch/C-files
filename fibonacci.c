#include<stdio.h>
int main()
{
   int num,n1=0,n2=1,n3,i;
   printf("Enter the number of elements:");
   scanf("%d",&num);
   printf("%d\t%d\t",n1,n2);
   for (i=2;i<num;i++)
   {
      n3 = n1+n2;
      printf("%d\t",n3);
      n1=n2;
      n2=n3;
   }
   printf("\n");
   return 0;
}