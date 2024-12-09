#include<stdio.h>
#include<string.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
}s[5];

int main()
{
    for(int i=0;i<=4;i++)
    {
   printf("entre roll no. of student %d \n",i+1);
    scanf("%d",&s[i].roll);
    printf("entre cgpa of student %d \n",i+1);
    scanf("%f",&s[i].cgpa);
    printf("entre name  of student %d \n",i+1);
    getchar();
   scanf("%[^\n]",s[i].name);
    }

 printf("roll no.\tcgpa\tname\n");

    for(int i=0;i<=4;i++)
    {
   
   printf("%d\t\t%.2f\t%s\n",s[i].roll,s[i].cgpa,s[i].name);
   
    }
  
    

    return 0;
}
