#include<stdio.h>
#include<stdlib.h>
struct points{
  int x[2];
  int y[2];
};

int area(struct points upper,struct points lower){
  int len,bre;
  len=abs(upper.x[1]-upper.x[0]);
  bre=abs(upper.y[0]-lower.y[0]);
  return len*bre;
}

int main(){

    struct points upper,lower;
    printf("enter upper points in (x1,y1)(x2,y2) format");
    scanf("%d%d%d%d",&upper.x[0],&upper.y[0],&upper.x[1],&upper.y[1]);
    printf("enter lower points in (x1,y1)(x2,y2) format");
    scanf("%d%d%d%d",&lower.x[0],&lower.y[0],&lower.x[1],&lower.y[1]);
    printf("%d",area(upper,lower));

  return 0; 

}
