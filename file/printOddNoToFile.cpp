#include<stdio.h>
int main(){
    FILE *data=fopen("text.txt","w");
    int n;
    printf("enter a no");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        fprintf(data,"%d\n",i);
       
    }

    fclose(data);
    printf("done");
    return 0;

}
