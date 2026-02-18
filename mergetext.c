#include<stdio.h>
int main()
{
   FILE *file1,*file2,*mergd;
   char ch;
   file1 = fopen("FILE1.txt","r");
   if (file1==NULL)
   {
      printf("FILE NOT FOUND\n");
      return 1;
   }
   file2 = fopen("FILE2.txt","r");
   if (file2==NULL)
   {
      printf("FILE NOT FOUND\n");
      return 1;
   }
   mergd = fopen("MERGEDFILE.txt","w");
   while ((ch = fgetc(file1))!= EOF)
   {
      fputc(ch,mergd);
   }
   while ((ch = fgetc(file2))!= EOF)
   {
      fputc(ch,mergd);
   }
   printf("MERGED FILE SUCCESSFULLY\n");
   fclose(file1);
   fclose(file2);
   fclose(mergd);
   return 0;
}