#include<stdio.h>
int main()
{
   int array[10],i,n,*pt;
   printf("ENTER THE NUMBER OF ELEMENTS OF AN ARRAY:");
   scanf("%d",&n);
   pt = &array[0];
   printf("ENTER THE ARRAY ELEMENTS:");
   for (i=0;i<n;i++)
   {
      scanf("%d",pt);
      pt++;
   }
   pt = &array[n-1];
   printf("REVERSE OF THE ELEMENTS:");
   for (i=n;i>0;i--)
   {
      printf("%d\t", *pt);
      pt--;
   }
   printf("\n");
   return 0;
}