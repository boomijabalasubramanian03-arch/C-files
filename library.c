#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count;
struct library1
{
   char bname[50];
   char aname[50];
   int np;
   int price;
   int bid;
};
struct library2
{
   int mid;
};
int main()
{
   struct library1 lib1[100];
   struct library2 lib2;
   int i,choice,n,bookid;
   extern int count;
   int m;
   printf("HOW MANY TIMES ARE YOU GONNA RUN THIS PROGRAM:");
   scanf("%d",&m);
   printf("\t MENU \t\n");
   printf("1)ADDING BOOK INFORMATION\n");
   printf("2)DISPLAYING BOOK INFORMATION\n");
   printf("3)ISSUING A BOOK\n");
   printf("4)RETURNING A BOOK\n");
   printf("5)COUNTING NUMBER OF BOOKS\n");
   while(m>0)
   {
      printf("ENTER YOUR CHOICE:");
      scanf("%d",&choice);
      switch (choice)
      {
         case 1:
            printf("ENTER THE NO OF BOOKS:");
            scanf("%d",&n);
            for (i=0;i<n;i++)
            {
               printf("ENTER BOOK NAME:");
               scanf("%s",lib1[i].bname);
               printf("ENTER AUTHOR NAME:");
               scanf("%s",lib1[i].aname);
               printf("ENTER NO OF PAGES:");
               scanf("%d",&lib1[i].np);
               printf("ENTER PRICE:");
               scanf("%d",&lib1[i].price);
               printf("ENTER BOOK ID:");
               scanf("%d",&lib1[i].bid);
               count++;
               m--;
            }
            break;
         case 2:
            if (count==0)
            {
               printf("NO INFORMATION FOUND\n");
            }
            else
            {
               printf("BOOK NAME\tAUTHOR NAME\tNO OF PAGES\tPRICE\n");
               for (i=0;i<count;i++)
               {
                  printf("%s\t%s\t%d\t%d\n",lib1[i].bname,lib1[i].aname,lib1[i].np,lib1[i].price);
               }
            }
            m--;
            break;
         case 3:
            printf("ENTER BOOK ID:");
            scanf("%d",&bookid);
            for (i=0;i<count;i++)
            {
               if (lib1[i].bid==bookid)
               {
                  printf("THE BOOK %s IS ISSUED SUCCESSFULLY\n",lib1[i].bname);
               }
            }
            m--;
            break;
         case 4:
            printf("ENTER MEMBER ID:");
            scanf("%d",&lib2.mid);
            printf("THE BOOK RETURNED SUCCESSFULLY\n");
            m--;
            break;
         case 5:
            printf("THE NUMBER OF BOOKS IN LIBRARY IS %d\n",count);
            m--;
            break;
         default :
            printf("INVALID CHOICE");
            break;
      }
   }
   return 0;
}

