#include<stdio.h>
int main()
{
   float l1,l2,l3;
   printf("Enter the length of first line:");
   scanf("%f",&l1);
   printf("Enter the length of second line :");
   scanf("%f",&l2);
   printf("Enter the length of third line:");
   scanf("%f",&l3);
   if ((l1+l2>l3)&&(l2+l3>l1)&&(l3+l1>l2))
   {
      printf("These lines form a triangle\n");
   }
   else
   {
      printf("These lines not form a triangle\n");
   }
   return 0;
}