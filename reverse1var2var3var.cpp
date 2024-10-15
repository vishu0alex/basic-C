#include<stdio.h>
int main()
{
	int n,m,r=0;
	printf("enter the no. you want to reverse\n");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		r=r*10+m;
		n/=10;
	}

//for 2 var put value of (m) in equation
	//for 1 var (n=/10 and printf(n) in while loop)
	
	printf("reverse = %d",r);

	

  return 0;
	
}
