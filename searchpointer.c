#include<stdio.h>
int main()
{
   int *arr,n,num,i,c=0;
   printf("ENTER THE NUMBER OF ELEMENTS:");
   scanf("%d",&n);
   printf("ENTER THE ARRAY ELEMENTS:");
   for (i=0;i<n;i++)
   {
      scanf("%d",arr+i);
   }
   printf("ENTER THE ELEMENT TO SEARCH:");
   scanf("%d",&num);
   for (i=0;i<n;i++)
   {
      if( *(arr+i) ==  p)
      {
         c++;
      }
   }
   if (c==0)
   {
      printf("THE ELEMENT IS NOT FOUND\n");
   }
   else
   return 0;
}

