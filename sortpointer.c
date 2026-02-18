#include<stdio.h>
void main()
{
   int *a,i,j,num,temp;
   printf("ENTER THE NUMBER:");
   scanf("%d",&num);
   printf("ENTER THE ARRAY ELEMENTS:");
   for (i=0;i<num;i++)
   {
      scanf("%d",a+i);
   }
   for (i=0;i<num;i++)
   {
      for (j=i+i;j<num;j++)
      {
         if (*(a+j) < *(a+i))
         {
            temp = *(a+i);
            *(a+i) = *(a+j);
            *(a+j) = temp;
         }
      }
   }
   printf("ARRAY ELEMENTS AFTER SORTING ARE :\n");
   for (i=0;i<num;i++)
   {
      printf("%d\t",*(a+i));
   }
   printf("\n");
}