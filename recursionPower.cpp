#include<stdio.h>
int power(int base,int expo)
{
	if(expo==0)
	return 1;
	return base*power(base,expo-1);
}
int main()
{
	int base,expo;
	printf("enter base and exponent  ");
	scanf("%d%d",&base,&expo);
	printf("%d",power(base,expo));
	return 0;
}
