#include<stdio.h>
#include<string.h>
struct book{
  char title[50],author[50];
  float price;
  int stock;
}b[3];


int main(){
  for(int i=0;i<3;i++){
    printf("enter book name,author,price,stock\n");
    getchar();
    scanf("%[^\n]",b[i].title);
    getchar();
    scanf("%[^\n]",b[i].author);
    getchar();
    scanf("%f%d",&b[i].price,&b[i].stock);
  }
  for(int i=0;i<3;i++){
    if(b[i].stock>10){
      printf("name=%s\nauthor=%s\nprice=%.2f\n",b[i].title,b[i].author,b[i].price);
    }
  }


  return 0;
}
