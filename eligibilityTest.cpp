#include<stdio.h>
int main()
{
int m,p,c,total,totalmp;
printf("enter the marks you obtain in MATHS \n ");
scanf("%d",&m);
printf("enter the marks you obtain in CHEMISTRY \n ");
scanf("%d",&p);
printf("enter the marks you obtain in PHYSICS \n ");
scanf("%d",&c);
if(m>=65 && p>=55 && c>=55 && (m+p+c)>=190 && (m+p)>=140)
printf("YOU ARE ELIGIBLE FOR ADMISSION \n");
else
printf("YOU ARE NOT ELIGIBLE FOR ADMISSION \n");
    return 0;
}
