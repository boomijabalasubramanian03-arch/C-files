#include<stdio.h>
int main()
{
   int arr[10],n,i,key,count=0;
   printf("Enter the array size:");
   scanf("%d",&n);
   printf("Enter the array elements:");
   for (i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("Enter the key value to search:");
   scanf("%d",&key);
   for (i=0;i<n;i++)
   {
      if (arr[i]==key)
      {
         printf("%d is found at position %d\n",key,i+1);
         count++;
      }
   }
   if (count>0)
   {
      printf("The key value %d occurs at %d times\n",key,count);
   }
   else
   {
      printf("The key value doesnot exists\n");
   }
   return 0;
}