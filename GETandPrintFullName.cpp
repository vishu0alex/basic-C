#include<stdio.h>
int main()
{
  char name[100];  

    printf("Enter your full name: ");
    scanf("%[^\n]", name);  

    printf("Hello, %s\n", name);

    return 0;
}
