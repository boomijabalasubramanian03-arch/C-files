#include<stdio.h>
#include<string.h>
int main()
{
   char str[50],substr[50];
   int i,j,len1,len2,count=0;
   printf("Enter the string:");
   scanf("%[^\n]",str);
   printf("Enter the substring to search:");
   scanf("%s",substr);
   len1 = strlen(str);
   len2 = strlen(substr);
   for (i=0;i<=len1-len2;i++)
   {
      for(j=0;j<=len2;j++)
      {
         if (str[i+j]!=substr[j])
         {
            break;
         }
         if (j=len2)
         {
            count++;
         }
      }
   }
   printf("%s occurs %d times in %s\n",substr,count,str);
   return 0;
}
