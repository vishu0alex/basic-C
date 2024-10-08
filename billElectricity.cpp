#include<stdio.h>
int main()
{
int customer_id;
float unit_consumed,amount;
char name[50];
printf("enter your id no.\n");
scanf("%d",&customer_id);
  
printf("enter your name\n");
scanf(" %[^\n]",name);
  
printf("enter amount of unit consumed\n");
scanf("%f",&unit_consumed);
  
amount=unit_consumed*6;

printf("customer id - %d\nname - %s\nunit consumed - %.2f\ntotal amount(Rs) - %.2f",customer_id,name,unit_consumed,amount); 

  return 0;
}#include<stdio.h>
int main()
{
int customer_id;
float unit_consumed,amount;
char name[50];
printf("enter your id no.\n");
scanf("%d",&customer_id);
  
printf("enter your name\n");
scanf(" %[^\n]",name);
  
printf("enter amount of unit consumed\n");
scanf("%f",&unit_consumed);
  
amount=unit_consumed*6;

printf("customer id - %d\nname - %s\nunit consumed - %.2f\ntotal amount(Rs) - %.2f",customer_id,name,unit_consumed,amount); 

  return 0;
}
