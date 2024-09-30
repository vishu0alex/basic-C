#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 no. to check which no. is greatest\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c)
	printf("%d is greatest no.",a);
	else 
	if(b>=c)
	printf("%d is greatest no.",b);
	else
	printf("%d is greatest no.",c);

	
  return 0;
	
}
