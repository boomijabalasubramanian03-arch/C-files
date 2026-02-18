#include<stdio.h>
struct employee
{
   char empname[50];
   int empid;
   float empsal;
};
int main()
{
   struct employee e[100];
   struct employee *emp[100];
   int i,n;
   printf("ENTER THE NUMBER OF DETAILS TO BE ENTERED:");
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
      printf("Enter the employee name:");
      scanf("%s",e[i].empname);
      printf("Enter the employee id:");
      scanf("%d",&e[i].empid);
      printf("Enter the employee salary:");
      scanf("%f",&e[i].empsal);
   }
   printf("DISPLAYING EMPLOYEE DETAILS\n");
   printf("NAME\tID\tSALARY\n");
   for (i=0;i<n;i++)
   {
      emp[i] = &e[i];
      printf("%s\t%d\t%f\n",emp[i]->empname,emp[i]->empid,emp[i]->empsal);
   }
   return 0;
}