#include<stdio.h>
#include<stdlib.h>
int main()
{
   int c,i,j,count=0;
   char str1[50],str2[50];
   printf("MENU\n");
   printf("1)length\n2)reverse\n3)copying\n4)comparision\nconcatenation\n");
   printf("Enter your choice:");
   scanf("%d",&c);
   switch (c)
   {
      case 1:
         printf("Enter the string:");
         scanf("%s",str1);
         for (i=0;str1[i]!='\0';i++)
         {
            count++;
         }
         printf("LENGTH IS %d\n",count);
         break;
      case 2:
         printf("Enter the string:");
         scanf("%s",str1);
         for (i=0;i<=count;i++)
         {
            str1[i]=str1[count-i];
         }
         printf("REVERSE IS %s",str1);
         break;
      case 3:
         printf("Enter two strings:");
         scanf("%s\n%s",str1,str2);
         for(i=0;str1[i]!='\0';i++)
         {
            str2[i]=str1[i];
         }
         printf("S1=%s,S2=%s",str1,str2);
         break;
      case 4:
         printf("enter 2 strs:");
         scanf("%s\n%s",str1,str2);
         for(i=0;str1[i]!='\0';i++)
         {
            for(j=0;str2[j]!='\0';j++)
            {
               if(str1[i]!=str2[j])
               {
                  count =0;
                  break;
               }
            }
         }
         if(count==0)
         {
            printf("not same");
         }
         else
         {
            printf("same");
         }
         break;
   }
   return 0;
}
