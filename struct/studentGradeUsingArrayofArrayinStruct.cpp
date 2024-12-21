#include<stdio.h>


struct Student {
   
    char subjects[3][50],name[50]; 
    int marks[3],rollno,total;
    float avg;           
}stu[50];

int main() {
  int n;
  printf("enter the no. of student\n");
  scanf("%d",&n);

    for(int i=0;i<n;i++){
      printf("enter name of %d studend\n",i+1);
      getchar();
      scanf("%[^\n]",stu[i].name);
      printf("enter roll no\n");
      scanf("%d",&stu[i].rollno);
      getchar();

      
    printf("Enter the names of 3 subjects:\n");
    for(int j = 0; j < 3; j++) {
        printf("Subject %d: ", j + 1);
        scanf("%s", stu[i].subjects[j]);  
    }

    printf("Enter the marks for 3 subjects:\n");
      stu[i].total=0;
    for(int j = 0; j < 3; j++) {
        printf("Marks for %s: ", stu[i].subjects[j]);
        scanf("%d", &stu[i].marks[j]);  
         stu[i].total+=stu[i].marks[j];
    }

   
    stu[i].avg=stu[i].total/3;

    }
      printf("student who get more then 75%% are :\n");
     for(int i=0;i<n;i++){
        if(stu[i].avg>75){
      printf("%s\n",stu[i].name);
     }
    
    }

  

    return 0;
}
