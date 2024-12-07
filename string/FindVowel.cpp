#include<stdio.h>
#include<string.h>

int vowel(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || 
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || 
            str[i] == 'U') {
            count++;
        }
    }
    return count;
}


int main()
{
   char pass[100];
   scanf("%[^\n]",pass);
   
  vowel(pass);
  printf("%d",vowel(pass));
  
    return 0;
}
