#include<stdio.h>
int main()
{
	char op;
	float a,b;
	printf("enter the operator (+,-,*,/)\n");
	scanf("%c",&op);
	printf("enter the first no.\n");
	scanf("%f",&a);
	printf("enter the second no.\n");
	scanf("%f",&b);
	switch (op)
	{
	case '+':
	printf("sum=%.2f\n",a+b);		
		break;

	case '-':
	printf("difference=%.2f\n",a-b);		
		break;

	case '*':
	printf("multiplication=%.2f\n",a*b);		
		break;

	case '/':
	if(b==0)
	printf("denominator cant be 0\n");
	else
	printf("division=%.2f\n",a/b);		
		break;		
	
	default:
	printf("INVALID INPUT\n");
		break;
	}
	
  return 0;
	
}
