#include<stdio.h>
struct book
{
   char bname[50];
   char aname[50];
   float price;
   int npages;
};
int main()
{
   struct book b[100];
   struct book *bp[100];
   int n,i;
   printf("ENTER THE NO OF BOOK DETAILS TO BE ENTERED:");
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
      printf("ENTER BOOK NAME:");
      scanf("%s",b[i].bname);
      printf("ENTER AUTHOR NAME:");
      scanf("%s",b[i].aname);
      printf("ENTER PRICE:");
      scanf("%f",&b[i].price);
      printf("ENTER NO OF PAGES:");
      scanf("%d",&b[i].npages);
   }
   printf("DISPLAYING BOOK DETAILS\n");
   printf("BOOK NAME\tAUTHOR\tPRICE\t\tNO OF PAGES\n");
   for (i=0;i<n;i++)
   {
      bp[i]=&b[i];
      printf("%s\t%s\t%f\t%d\n",bp[i]->bname,bp[i]->aname,bp[i]->price,bp[i]->npages);
   }
   return 0;
}
