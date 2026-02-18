#include<stdio.h>
int main()
{
   int num;
   printf("Enter the number:");
   scanf("%d",&num);
   (num%6==0)?printf("Number %d is divisible by 6\n",num):printf("Number %d is not divisible by 6\n",num);
   return 0;
}