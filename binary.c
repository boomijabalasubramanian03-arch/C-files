#include<stdio.h>
struct student
{
   int sno;
   char sname[30];
   float mark;
};
int main()
{
   struct student s[50];
   int i;
   FILE *fp;
   fp = fopen("STUDENT.bin","wb");
   for (i=0;i<2;i++)
   {
      printf("ENTER ROLL NUMBER and NAME OF STUDENT:");
      scanf("%d%s",&s[i].sno,s[i].sname);
      printf("ENTER STUDENT MARK:");
      scanf("%f",&s[i].mark);
      fwrite(&s[i],sizeof(s[i]),1,fp);
   }
   fclose(fp);
   fp = fopen("STUDENT.bin","rb");
   printf("STUDENT DETAILS\n");
   printf("ROLLNO\tNAME\tMARK\n");
   for (i=0;i<2;i++)
   {
      fread(&s[i],sizeof(s[i]),1,fp);
      printf("%d\t",s[i].sno);
      printf("%s\t",s[i].sname);
      printf("%f\t",s[i].mark);
      printf("\n");
   }
   fclose(fp);
   return 0;
}
