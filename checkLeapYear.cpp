#include<stdio.h>
int main()
{
	int a;
	printf("enter year to check whether it is leap year or not\n");
	scanf("%d",&a);
	if((a%4==0 && a%100!=0) || (a%400==0))
	printf("%d is leap year\n",a);
	else
	printf("%d is not leap year\n",a);

  return 0;
	
}
