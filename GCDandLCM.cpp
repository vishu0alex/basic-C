#include<stdio.h>
int main()
{
   int num1,num2,gcd=1;
   scanf("%d%d",&num1,&num2);
   int small=(num1<num2)?num1:num2;
   for(int i=1;i<=small;i++)
   {
    if(num1%i==0 && num2%i==0)
     gcd=i;
   }
     printf("%d\n",gcd);
     printf("%d",(num1*num2)/gcd);
    return 0;
}
