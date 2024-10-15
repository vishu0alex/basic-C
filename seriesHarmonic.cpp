#include<stdio.h>
int main()
{
int n;
printf("enter a upto which you want to print  the series\n");
scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
  printf(" + 1/%d",i);
 }

  return 0;
}
