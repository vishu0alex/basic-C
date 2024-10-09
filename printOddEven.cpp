#include<stdio.h>
int main()
{
int n,sum=0,o=-1;
printf("enter the no. of odd no. you want\n");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
  o+=2;
printf("%d ",o);
sum+=o;

/*o+=2; for even put o=0
printf("%d",o);
sum+=o;
*/
}
printf("\nsum=%d",sum);

  return 0;
}
