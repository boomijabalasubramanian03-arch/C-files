#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,d,r1,r2;
   printf("Enter the values of a,b,c:");
   scanf("%f%f%f",&a,&b,&c);
   d = b*b-4*a*c;
   if (d>0)
   {
      r1 = -b+sqrt(d)/(2*a);
      r2 = -b-sqrt(d)/(2*a);
      printf("The real roots are %f , %f\n",r1,r2);
   }
   else if (d==0)
   {
      r1 = -b/(2*a);
      r2 = -b/(2*a);
      printf("The real roots are equal and it is %f\n",r1);
   }
   else
   {
      printf("Roots are imaginary\n");
   }
   return 0;
}