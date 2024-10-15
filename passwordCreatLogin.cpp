#include<stdio.h>
#include<string.h>
int main()
{
char password[100],enterpass[100];

printf("create password\n");
scanf(" %[^\n]",password);

printf(" password created succesfully \n now enter the password\n");
scanf(" %[^\n]",enterpass);

if(strcmp(password,enterpass)==0)
{
  printf("succesfully logined\n");
}

else{
do{
printf("wrong password , enter again\n");
scanf(" %[^\n]",enterpass);
}
while(strcmp(password,enterpass)!=0);


 printf("succesfully logged in\n");
}
  return 0;
}
