#include<stdio.h>
int main()
{
	int a,factorial=1;
	printf("enter the no. to find its factorial\n");
	scanf("%d",&a);
	if(a<0)
		printf("factorial of nagetive no. are not define\n");
	for(int i=1;i<=a;i++)
	{
		factorial*=i;
	}
	printf("factorial=%d\n",factorial);
	

  return 0;
	
}
