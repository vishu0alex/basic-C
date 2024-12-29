#include<stdio.h>
int main(){
    FILE *data;
    data=fopen("text.txt","w");
    int class,cgpa;
    char name[50];

    printf("enter name");
    getchar();
    scanf("%[^\n]",name);
    printf("enter class");
    scanf("%d",&class);
    printf("enter cgpa");
    scanf("%d",&cgpa);

    fprintf(data,"%s\n",name);
    fprintf(data,"%d\n",class); 
    fprintf(data,"%d\n",cgpa);



    fclose(data);
    return 0;
}
