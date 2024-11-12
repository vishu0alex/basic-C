#include<stdio.h>
int table(int n,int a)
{
	if(a>10)
	 return 0;
	printf("%d\n",n*a);
   return table(n,a+1);
}
int main()
{
	int n;
	printf("enter no.  ");
	scanf("%d",&n);
	table(n,1);
	return 0;
}
