// Online C compiler to run C program online
#include<stdio.h>
int main()
{
int n;
printf("enter a no. \n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  printf("cube of %d = %d\n",i,i*i*i);
}

return 0;
}
