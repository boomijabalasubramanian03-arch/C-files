#include<stdio.h>
#include<stdlib.h>
int main()
{
   int randomnum,i;
   for (i=0;i<15;i++)
   {
      randomnum = rand()%10;
      printf("%d\n",randomnum);
   }
   return 0;
}