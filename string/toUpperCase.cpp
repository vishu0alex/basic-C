#include<stdio.h>
#include<string.h>

void uppercase(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
          str[i]= str[i]-'a'+'A';       //or str[i]= str[i]-32; 
        }
    }
}


int main()
{
   char pass[100];
   scanf("%[^\n]",pass);
   
  uppercase(pass);
 puts(pass);
  
    return 0;
}
