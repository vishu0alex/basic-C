#include<stdio.h>
int main()
{
	int a[5]={1,2,2,4,4};
	for(int i=0;i<5;i++)
	{
		int count=0;
		printf("%d is repeated at index values: ",a[i]);
		for(int j=0;j<5;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d,",j);
				count ++;
			}
		}
		printf("\ncount: %d\n",count);
	}
	return 0;
}
