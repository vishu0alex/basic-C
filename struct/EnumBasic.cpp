#include<stdio.h>
#include<string.h>
#include<ctype.h>
enum day{
    sunday=0,monday,tuesday,wednesday,thursday,friday,saturday
};
int main(){
  enum day day;
   int today;
   today=sunday;
    day=sunday;
    printf("%d%d%d",sunday,day,today);
    return 0;
}
