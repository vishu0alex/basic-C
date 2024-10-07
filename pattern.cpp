#include<stdio.h>
int main()
{
	int r,c;
	printf("enter the row of pattern\n");
	scanf("%d",&r);
	printf("enter the column of pattern\n");
	scanf("%d",&c);
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if((i+j)>=(c+1))
			printf(" *");
			else
			printf(" ");
		}
		printf("\n");
	}


  return 0;
	
}
