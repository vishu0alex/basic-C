#include<stdio.h>
int main()
{
int rollno,phy,che,math;
float per,total;
char name[50];
printf("enter your rollno.\n");
scanf("%d",&rollno);
  
printf("enter your name\n");
scanf("%s",&name);
  
printf("enter your physics marks\n");
scanf("%d",&phy);
  
printf("enter your maths marks\n");
scanf("%d",&math);
  
printf("enter your chemistry marks\n");
scanf("%d",&che);
  
total=phy+che+math;
per=(total/300)*100;
  
if(per>=40&&per<50)
printf("your percentage is %.2f and division is 3rd\n",per);
else if (per>=50&&per<60)
printf("your percentage is %.2f and division is 2nd\n",per);
else if(per>=60&&per<75)
printf("your percentage is %.2f and division is 1st\n",per);
else
printf("fail\n");

  return 0;
}
