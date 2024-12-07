#include<stdio.h>
#include<string.h>

void deletespace(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
          for(int j=i;str[j]!='\0';j++){
            str[j]=str[j+1];
          }
        }
    }
}


int main()
{
   char pass[100];
   scanf("%[^\n]",pass);
   
  deletespace(pass);
 puts(pass);
  
    return 0;
}
