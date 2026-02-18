#include<stdio.h>
int main()
{
   int m1[3][3],i,j;
   printf("Enter the elements of the matrix:");
   for (i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
         scanf("%d",&m1[i][j]);
      }
      printf("\n");
   }
   printf("THE TRANSPOSE OF A MATRIX IS:\n");
   for (i=0;i<3;i++)
   {
      for (j=0;j<3;j++)
      {
         printf("%d\t",m1[j][i]);
      }
      printf("\n");
   }
   return 0;
}
