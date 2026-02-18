#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char str1[20],str2[20];
   int choice,i,j;
   printf("MENU\n");
   printf("1)LENGTH OF STRING\n");
   printf("2)REVERSE OF THE STRING\n");
   printf("3)CONCATENATION\n");
   printf("4)COPYING\n");
   printf("5)COMPARISON\n");
   printf("ENTER YOUR CHOICE:");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
         printf("ENTER THE STRING:\n");
         scanf("%s",str1);
         i = strlen(str1);
         printf("THE LENGTH OF THE STRING IS %d\n",i);
         break;
      case 2:
         printf("ENTER THE STRING:\n");
         scanf("%s",str1);
         for(i=strlen(str1);i>=0;i--)
         {
            printf("%c",str1[i]);
         }
         printf("\n");
         break;
      case 3:
         printf("ENTER TWO STRINGS:\n");
         scanf("%s\n%s",str1,str2);
         strcat(str1,str2);
         printf("AFTER CONCATENATION,THE STRING IS %s\n",str1);
         break;
      case 4:
         printf("ENTER TWO STRINGS:\n");
         scanf("%s\n%s",str1,str2);
         strcpy(str2,str1);
         printf("AFTER COPYING S1 = %s,S2 = %s\n",str1,str2);
         break;
      case 5:
         printf("ENTER TWO STRINGS:\n");
         scanf("%s\n%s",str1,str2);
         j = strcmp(str1,str2);
         if (j==0)
         {
            printf("STRINGS ARE SAME\n");
         }
         else
         {
            printf("STRINGS ARE NOT SAME\n");
         }
         break;
      default:
         printf("INVALID CHOICE\n");
         break;
   }
   return 0;
}