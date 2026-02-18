#include<stdio.h>
int main()
{
   int numarr[5],i,j,temp;
   printf("Enter the array elements to sort:");
   for ( i=0;i<5;i++)
   {
      scanf("%d",&numarr[i]);
   }
   for (i=0;i<5;i++)
   {
      for (j=i+1;j<5;j++)
      {
         if (numarr[i]>numarr[j])
         {
            temp = numarr[i];
            numarr[i] = numarr[j];
            numarr[j] = temp;
         }
      }
   }
   printf("ASCENDING ORDER\n");
   for (i=0;i<5;i++)
   {
      printf("%d\t",numarr[i]);
   }
   printf("\n");
   return 0;
}
