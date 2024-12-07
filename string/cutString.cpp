#include<stdio.h>
#include<string.h>
void slice(char pass[],int n,int m){
    char newpass[100];
    int j=0;
   for(int i=n-1;i<m;i++,j++){
        newpass[j]=pass[i];
   }
      newpass[j]='\0';
puts(newpass);
}
int main()
{
   char pass[100];
   scanf("%[^\n]",pass);
   
  slice(pass,2,3);
  
    return 0;
}
