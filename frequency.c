#include<stdio.h>
#include<string.h>
int main()
{
   int count,i;
   char str[30],ch;
   printf("Enter the string:");
   scanf("%s",str);
   printf("Enter the character to find its frequency:");
   scanf(" %c",&ch);
   for (i=0;str[i]!='\0';i++)
   {
      if (ch==str[i])
      {
         count++;
      }
   }
   printf("Frequency of %c is equal to %d\n",ch,count);
   return 0;
}
