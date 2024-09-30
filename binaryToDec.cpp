#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char binary[64];
	double decimal=0;
	int length;
	printf("enter a binary no.\n");
	scanf("%s",binary);

	length=strlen(binary);

	for (int i = 0; i < length; i++)
	{
		if (binary[length-1-i]=='1')
		{
			decimal+=pow(2,i);
		}
	}
	
        printf("decimal value=%lf\n",decimal);


       return 0;
	
}
