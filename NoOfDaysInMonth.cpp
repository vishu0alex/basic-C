#include<stdio.h>
int main()
{
int month,year;
printf("enter the month from 1 to 12\n ");
scanf("%d",&month);
printf("enter the year \n");
scanf("%d",&year);
switch(month)
{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("no. of days = 31");
		break;
	case 2:
		if((year%4==0 && year%100!=0)||(year%400==0))
		printf("no. of days = 29");
		else
		printf("no. of days = 28");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
     	printf("no. of days = 30");
		break;
	default:
	printf("invalid input (please enter no. from 1 to 12 only)");		
}


    return 0;
}
