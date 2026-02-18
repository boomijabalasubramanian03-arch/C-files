#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i,*ptr,sum=0;
   printf("ENTER THE NUMBER OF ELEMENTS:");
   scanf("%d",&n);
   ptr = (int *)malloc(n*sizeof(int));
   if (ptr==NULL)
   {
      printf("ERROR! MEMORY NOT ALLOCATED\n");
      exit(0);
   }
   printf("ENTER THE NUMBERS:");
   for (i=0;i<n;i++)
   {
      scanf("%d",ptr+i);
      sum += *(ptr+i);
   }
   printf("SUM = %d\n",sum);
   free(ptr);
   return 0;
}