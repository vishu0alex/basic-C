#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int n,random;

srand(time(0));
random=rand()%20+1;

printf("guess the no.\n");
scanf("%d",&n);
if(n==random)
{
  printf("well guessed , no is %d\n",n);
}
else{
do{
printf("wrong no. guessed , enter again\n");
scanf("%d",&n);
}
while(n!=random);
 printf("well guessed , no is %d\n",n);
}
  return 0;
}
