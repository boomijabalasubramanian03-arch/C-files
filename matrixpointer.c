#include<stdio.h>
int main()
{
   int i,j,mat[100][100],rs[100],cs[100],r,c;
   printf("ENTER THE NO OF ROWS AND COLUMNS OF A  MATRIX:");
   scanf("%d%d",&r,&c);
   printf("ENTER THE VALUES OF THE MATRIX:");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         scanf("%d",(*(mat+i)+j));
      }
   }
   for (i=0;i<r;i++)
   {
      for (j=0;j<c;j++)
      {
         printf("%d\t",(*(*(mat+i)+j)));
      }
      printf("\n");
   }
   for (i=0;i<r;i++)
   {
     *(rs+i)=0;
      for (j=0;j<c;j++)
      {
         *(rs+i) = *(rs+i) + *(*(mat+i)+j);
      }
   }
   for (i=0;i<r;i++)
   {
      *(cs+i)=0;
      for (j=0;j<c;j++)
      {
        *(cs+i) += *(*(mat+j)+i);
      }
   }
   for (i=0;i<r;i++)
   {
      printf("THE SUM OF COLUMNS IS %d\n",*(cs+i));
   }
   for (i=0;i<r;i++)
   {
      printf("THE SUM OF ROWS IS %d\n",*(rs+i));
   }
   return 0;
}