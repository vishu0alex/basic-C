#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two no.\n");
	scanf("%d%d",&a,&b);
	printf("here a=%d , b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swaped value a=%d , b=%d ",a,b);
	
	
	return 0;
	
	
}
