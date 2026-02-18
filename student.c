#include<stdio.h>
#include<stdlib.h>
union student
{
   char name[50];
};
int main()
{
   union student sd[100];
   int count=0,rn[100];
   float m1[100],m2[100],m3[100],m4[100],total[100];
   float per[100];
   int n,i,choice;
   printf("MENU\n");
   printf("1)ADDING STUDENT DETAILS\n");
   printf("2)DISPLAYING STUDENT DETAILS\n");
   printf("3)CALCULATING TOTAL AND PERCENTAGE\n");
   printf("4)DISPLAYING TOTAL NO OF STUDENTS\n");
   printf("5)EXIT\n");
   while(1)
   {
      printf("ENTER YOUR CHOICE:");
      scanf("%d",&choice);
      switch (choice)
      {
         case 1:
            printf("ENTER NO OF STUDENTS:");
            scanf("%d",&n);
            for (i=0;i<n;i++)
            {
               printf("ENTER NAME OF THE STUDENT:");
               scanf("%s",sd[i].name);
               printf("ENTER ROLL NUMBER:");
               scanf("%d",&rn[i]);
               printf("ENTER MARK1:");
               scanf("%f",&m1[i]);
               printf("ENTER MARK2:");
               scanf("%f",&m2[i]);
               printf("ENTER MARK3:");
               scanf("%f",&m3[i]);
               printf("ENTER MARK4:");
               scanf("%f",&m4[i]);
               count++;
            }
            break;
         case 2:
            if (count==0)
            {
               printf("NO RECORD\n");
            }
            else
            {
               for (i=0;i<n;i++)
               {
                  total[i] = m1[i]+m2[i]+m3[i]+m4[i];
                  printf("TOTAL:%f\n",total[i]);
                  per[i] = (total[i]/400)*100;
                  printf("PERCENTAGE:%f\n",per[i]);
               }
            }
            break;
         case 3:
            printf("-------------------------------------------------------------------------------------------------------------\n");
            printf("NAME\t|ROLLNO\t|MARK1\t\t|MARK2\t\t|MARK3\t\t|MARK4\t\t|TOTAL\t\t|PERCENTAGE|\n");
            printf("-------------------------------------------------------------------------------------------------------------\n");
            for (i=0;i<n;i++)
            {
               printf("|%s\t|",sd[i].name);
               printf("%d\t|%f\t|%f\t|%f\t|%f\t|%f\t|%f|\n",rn[i],m1[i],m2[i],m3[i],m4[i],total[i],per[i]);
            }
            printf("------------------------------------------------------------------------------------------------------------\n");
            break;
         case 4:
            printf("TOTAL RECORDS IS %d\n",count);
            break;
         case 5:
            printf("END\n");
            exit(0);
            break;
         default:
            printf("INVALID CHOICE\n");
            break;
      }
   }
   return 0;
}

