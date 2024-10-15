#include<stdio.h>
int main()
{
int n,b,count=0,m=0;
printf("enter a binary no.\n");
scanf("%d",&n);
while(n!=0)
{
  b=n%10;
  if(b==0)
  {
    count++;
  }
  else
    {
      if(m<count)
      {
       m=count; 
      }
      count=0;
    }
    n/=10;
}
printf("max. consecutive of 0=%d",m);

  return 0;
}#include<stdio.h>
int main()
{
int n,b,count=0,m=0;
printf("enter a binary no.\n");
scanf("%d",&n);
while(n!=0)
{
  b=n%10;
  if(b==0)
  {
    count++;
  }
  else
    {
      if(m<count)
      {
       m=count; 
      }
      count=0;
    }
    n/=10;
}
printf("max. consecutive of 0=%d",m);

  return 0;
}
