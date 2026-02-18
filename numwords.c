#include<stdio.h>
int main()
{
   int y,num,digit,rev=0,rem;
   printf("Enter the number:");
   scanf("%d",&num);
   y = num;
   while (num!=0)
   {
      rem = num%10;
      rev = rev*10+rem;
      num/=10;
   }
   printf("The number %d in words is\t",y);
   start:
      digit = rev%10;
      rev /= 10;
   switch(digit)
   {
      case 0:
         printf("ZERO\t");
         break;
      case 1:
         printf("ONE\t");
         break;
      case 2:
         printf("TWO\t");
         break;
      case 3:
         printf("THREE\t");
         break;
      case 4:
         printf("FOUR\t");
         break;
      case 5:
         printf("FIVE\t");
         break;
      case 6:
         printf("SIX\t");
         break;
      case 7:
         printf("SEVEN\t");
         break;
      case 8:
         printf("EIGHT\t");
         break;
      case 9:
         printf("NINE\t");
         break;
      default:
         printf("INVALID");
         break;
   }
   if (rev!=0)
   {
      goto start;
   }
   printf("\n");
   return 0;
}
