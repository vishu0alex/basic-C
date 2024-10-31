#include<stdio.h>
#include<math.h>
int main()
{
int n,temp;
  scanf("%d",&n);
  temp=(int)sqrt(n);
  if (temp*temp==n)
    printf("perfect sqr");
  else
    printf("not");

  return 0;
}


//without using *

#include<stdio.h>
#include<math.h>
int main()
{
int n,sum=0,odd=1;
  scanf("%d",&n);
while(sum<n)
  {
    sum+=odd;
    odd+=2;
  }
  if(sum==n)
    printf("yes");
  else
    printf("no");
  return 0;
}
