#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,a,c,n;
	printf("enter the principal amount\n");
	scanf("%f",&p);
	printf("enter the rate per year in persentage\n");
	scanf("%f",&r);
	printf("enter the time period in year\n");
	scanf("%f",&t);
	printf("enter the no. of time compounded per year\n");
	scanf("%f",&n);
	r=r/100;
    a=p*pow((1+r/n),n*t);
    c=a-p;
	printf("total amount =%0.3f\n",a);
	printf("compound intrest earned =%0.3f\n",c);
	
	
	
	return 0;
	
	
}
