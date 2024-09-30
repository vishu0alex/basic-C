#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two no.\n");
	scanf("%d%d",&a,&b);
	printf("here a=%d , b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("swaped value a=%d , b=%d ",a,b);
	
	
	return 0;
	
	
}
