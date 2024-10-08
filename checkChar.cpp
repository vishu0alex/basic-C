#include<stdio.h>
int main()
{
  char name;  

    printf("Enter any character to check whether it is alphabet or digit or special char\n ");
    scanf("%c",&name);  

    if((name>='a'&& name<='z')||(name>='A'&& name<='Z'))
    printf("%c is alphabet\n", name);

    else if(name>='0'&&name<='9')
    printf("%c is digit\n", name);

    else
    printf("%c is special chararter\n", name);

    return 0;
}
