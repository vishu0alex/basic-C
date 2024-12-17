#include<stdio.h>
#include<string.h>
struct items{
  char name[50];
  float price;
  int product_id ,stock;
}item[100];


int main(){
  int n;
  printf("enter no. of items\n");
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    printf("enter name, price, product id, stock\n");
    getchar();
    scanf("%[^\n]",item[i].name);
    getchar();
    scanf("%f%d%d",&item[i].price,&item[i].product_id,&item[i].stock);
  }

  char input[50],name[50];
  int id,itemfound=0;
  printf("enter name or id of \n type name or id \n");
  scanf("%s",input);

  if(strcasecmp(input,"name")==0){
      printf("enter name\n");
  scanf("%s",name);
  for(int i=0;i<n;i++){
     if(strcasecmp(name,item[i].name)==0){
      itemfound=1;
      printf("name=%s\nproduct id=%d\nprice=%.2f\nstock=%d\n",item[i].name,item[i].product_id,item[i].price,item[i].stock);
      printf("type yes for purchase and no for not purchasing\n");
      scanf("%s",input);
      if(strcmp(input,"yes")==0){
      printf("thankyou for purchasing ,reamining stocks=%d\n",item[i].stock-1);
  }
  else if(strcasecmp(input,"no")==0)
   printf("thanks for visit\n");
   else printf("invalid input");
  }
  }
  if( itemfound=0)
  printf("product not available\n");
  }

  else if(strcasecmp(input,"id")==0){
    printf("enter id\n");
  scanf("%d",&id);
   for(int i=0;i<n;i++){
     if(item[i].product_id==id){
       itemfound=1;
      printf("name=%s\nproduct id=%d\nprice=%.2f\nstock=%d\n",item[i].name,item[i].product_id,item[i].price,item[i].stock);
      printf("type yes for purchase and no for not purchasing\n");
      scanf("%s",input);
      if(strcasecmp(input,"yes")==0){
      printf("thankyou for purchasing ,reamining stocks=%d\n",item[i].stock-1);
  }
  else if(strcasecmp(input,"no")==0)
   printf("thanks for visit\n");
   else printf("invalid input");
  }
  }
   if( itemfound=0)
  printf("product not available\n");
  }

  else printf("invalid input\n");

 
  
  return 0;
}
