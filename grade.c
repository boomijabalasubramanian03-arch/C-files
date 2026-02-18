#include<stdio.h>
int main()
{
   float m1,m2,m3,m4,total,per;
   printf("Enter the marks of four subjects m1,m2,m3,m4:");
   scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
   total = m1+m2+m3+m4;
   per = (total/400)*100;
   printf("The percentage is %f\n",per);
   if (per>=79 && per<=100)
   {
      printf("Grade is good\n");
   }
   else if (per>=59 && per<79)
   {
      printf("Grade is average\n");
   }
   else if (per>=39 && per<59)
   {
      printf("Grade is fair\n");
   }
   else
   {
      printf("Grade is fail\n");
   }
   return 0;
}