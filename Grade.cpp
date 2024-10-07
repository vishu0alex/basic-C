#include<stdio.h>
int main()
{
int marks;
printf("enter the marks you obtain in total\n ");
scanf("%d",&marks);
if(marks>=90)
printf("GRADE = 'A'");
if(marks>=80 && marks<90)
printf("GRADE = 'B'");
if(marks>=70 && marks<80)
printf("GRADE = 'C'");
if(marks>=60 && marks<70)
printf("GRADE = 'D'");
if(marks<60)
printf("GRADE = 'F'");
    return 0;
}
