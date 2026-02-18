#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   int i;
   char string[100],s[100];
   printf("Enter the string:");
   scanf("%s",string);
   for (i=0;string[i]!='\0';i++)
   {
      if (isupper(string[i]))
      {
         s[i] = tolower(string[i]);
      }
      else
      {
        s[i] =  toupper(string[i]);
      }
   }
   printf("AFTER DOODLING, THE STRING IS :%s\n",s);
   return 0;
}