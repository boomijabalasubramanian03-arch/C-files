#include<stdio.h>
int main()
{
   FILE *source,*des;
   char ch;
   source = fopen("SOURCE.txt","r");
   if (source==NULL)
   {
      printf("FILE NOT FOUND\n");
      return 1;
   }
   des = fopen("Destination.txt","w");
   if (des==NULL)
   {
      printf("FILE NOT FOUND\n");
      return 1;
   }
   while ((ch = fgetc(source))!= EOF)
   {
      fputc(ch , des);
   }
   printf("FILE COPIED SUCCESSFULLY\n");
   fclose(source);
   fclose(des);
   return 0;
}