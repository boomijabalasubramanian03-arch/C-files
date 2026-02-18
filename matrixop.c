#include<stdio.h>
int main()
{
   int A[5][5],B[5][5],ma[5][5],ms[5][5],mm[5][5];
   int i,j,k,r,c;
   printf("Enter the values of rows and columns:");
   scanf("%d%d",&r,&c);
   printf("Enter the values of matrix A:");
   for (i=0;i<r;i++)
   {
      for (j=0;j<c;j++)
      {
         scanf("%d",&A[i][j]);
      }
      printf("\n");
   }
   printf("Enter the values of matrix B:");
   for (i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         scanf("%d",&B[i][j]);
      }
      printf("\n");
   }
   printf("MATRIX ADDITION AND SUBTRACTION\n");
   for (i=0;i<r;i++)
   {
      for (j=0;j<c;j++)
      {
         ma[i][j]=A[i][j]+B[i][j];
         ms[i][j]=A[i][j]-B[i][j];
      }
   }
   printf("MATRIX MULTIPLICATION\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         mm[i][j]=0;
         for(k=0;k<c;k++)
         {
            mm[i][j]+=A[i][k]*B[k][j];
         }
      }
   }
   printf("The addition of two matrix A and B is :\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
         {
            printf("%d\t",ma[i][j]);
         }
      printf("\n");
   }
   printf("The subtraction of two matrix A and B is:\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         printf("%d\t",ms[i][j]);
      }
      printf("\n");
   }
   printf("The multiplication of the two matrix A and B is :\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         printf("%d\t",mm[i][j]);
      }
      printf("\n");
   }
   return 0;
}
