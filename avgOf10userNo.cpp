#include<stdio.h>
int main()
{
	int a[10];
	float sum;

	for(int i=1;i<=10;i++)
	{
	   printf("enter no. %d \n",i);
	   scanf("%d",&a[i]);
	   sum+=a[i];

	}
    printf("average = %.2f",sum/10);


  return 0;
	
}
