#include<stdio.h>
#include<string.h>
struct employee{
 char name[100];
 int id,year_of_service;
 float salary;
}emp[100];

int main()
{
   int n,i;
  printf("enter the no of employee\n");
  scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
   printf("entre name of employee %d \n",i+1);
   getchar();
    scanf("%[^\n]",emp[i].name);
    printf("entre id  \n");
    scanf("%d",&emp[i].id);
    printf("entre year of service \n");
   scanf("%d",&emp[i].year_of_service);
    printf("entre salary\n");
   scanf("%f",&emp[i].salary);

   if(emp[i].year_of_service>5)
   {
    printf("name=%s\n",emp[i].name);
    printf("id=%d\n",emp[i].salary);
    printf("bonus=%.2f\n",emp[i].salary+(emp[i].salary*10)/100);
   }
  
    }

    return 0;
}
