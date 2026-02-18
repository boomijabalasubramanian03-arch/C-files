#include<stdio.h>
int main()
{
   char line[50];
   int i,vow = 0,cons=0,digit=0,space=0,sc=0;
   printf("ENTER A STRING:");
   scanf("%[^\n]",line);
   for (i=0;line[i]!='\0';i++)
   {
      line[i] = tolower(line[i]);
      if (line[i]=='a'|| line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u')
      {
         vow++;
      }
      else if ((line[i]>='a')&&(line[i]<='z'))
      {
         cons++;
      }
      else if((line[i]>='0')&&(line[i]<='9'))
      {
         digit++;
      }
      else if(line[i]==' ')
      {
         space++;
      }
      else if((line[i]>=0)&&(line[i]<=47)||(line[i]>=58)&&(line[i]<=64)||(line[i]>=91)&&(line[i]<=96)||(line[i]>=123)&&(line[i]<=127))
      {
         sc++;
      }
      else
      {
         printf("INVALID INPUT");
      }
   }
   printf("The count of vowels is %d\n",vow);
   printf("The count of consonants is %d\n",cons);
   printf("The count of digits is %d\n",digit);
   printf("The count of spaces is %d\n",space);
   printf("The count of special characters is %d\n",sc);
   return 0;
}