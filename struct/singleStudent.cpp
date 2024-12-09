#include<stdio.h>
#include<string.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
};

int main()
{
    struct student s1;
    printf("entre roll no. \n");
    scanf("%d",&s1.roll);
    printf("entre cgpa  \n");
    scanf("%f",&s1.cgpa);
    printf("entre name  \n");
    getchar();
    scanf("%[^\n]",&s1.name); //fgets(s1.name,100,stdin);
    printf("your details\nroll no.=%d\ncgpa=%.2f\nname=%s\n",s1.roll,s1.cgpa,s1.name);

    return 0;
}
