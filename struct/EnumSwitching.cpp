#include<stdio.h>
#include<string.h>
#include<ctype.h>
enum operation{
    add=0,sub,mul,div
};
int main(){
int a,b;
   enum operation opr;
   printf("enter two no. ");
   scanf("%d%d",&a,&b);
   printf("enter \n0 for add\n1 for sub\n2 for mul\n3 for div\n ");
   scanf("%d",&opr);

   switch(opr){
    case add:
    printf("%d",a+b);
    break;

    case sub:
    printf("%d",a-b);
    break;

    case mul:
    printf("%d",a*b);
    break;

    case div:
    if(b!=0)
    printf("%d",a/b);
    break;

   default:
   printf("invalid input");
   break;
   
   }
 
    return 0;
}
