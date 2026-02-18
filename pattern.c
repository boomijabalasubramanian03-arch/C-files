#include<stdio.h>
int main()
{
   int row,space,numrows;
   printf("Enter the number of rows:");
   scanf("%d",&numrows);
   for (row = 1;row<=numrows;row++)
   {
      for (space=row; space < numrows; space++)
      {
         printf(" ");
      }
      for (space = 1;space<=(2*row-1);space++)
      {
         printf("*");
      }
      printf("\n");
   }
   for (row = numrows-1;row>=1;row--)
   {
      for (space = numrows;space>row;space--)
      {
         printf(" ");
      }
      for (space = 1;space<=(2*row-1);space++)
      {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}