// Online C compiler to run C program online
#include<stdio.h>
int main()
{
int n,t=0,sum=0;
printf("enter the no.of series \n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  t=(t*10)+9;
  sum+=t;
  printf("+%d",t);
}
printf("\nsum=%d",sum);

return 0;
}
