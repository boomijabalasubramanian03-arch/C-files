#include<stdio.h>
int main()
{
   int num1,num2,choice,result;
   printf("Enter the first number:");
   scanf("%d",&num1);
   printf("Enter the second number:");
   scanf("%d",&num2);
   printf("\nMENU");
   printf("\n1)ADDITION\n2)SUBTRACTION\n3)MULTIPLICATION\n4)DIVISION\n");
   printf("Enter your choice:");
   scanf("%d",&choice);
   switch (choice)
      {
         case 1:
            result = num1 + num2;
            printf("The addition value is %d\n",result);
            break;
         case 2:
            result = num1 - num2;
            printf("The subtraction value is %d\n",result);
            break;
         case 3:
            result = num1 * num2;
            printf("The multiplication value is %d\n",result);
            break;
         case 4:
            result = num1/num2;
            printf("The division value is %d\n",result);
            break;
         default:
            printf("INVALID CHOICE\n");
            break;
      }
   return 0;
}