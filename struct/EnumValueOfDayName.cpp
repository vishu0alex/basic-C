#include<stdio.h>
#include<string.h>
#include<ctype.h>
enum day{
    sunday=0,monday,tuesday,wednesday,thursday,friday,saturday
};
int main(){
 
   char today[20];
   printf("enter a day name ");
   scanf("%s",today);
   
   if(strcasecmp(today,"sunday")==0) printf("%d",sunday);
   if(strcasecmp(today,"monday")==0) printf("%d",monday);
   if(strcasecmp(today,"tuesday")==0) printf("%d",tuesday);
   if(strcasecmp(today,"wednesday")==0) printf("%d",wednesday);
   if(strcasecmp(today,"thursday")==0) printf("%d",thursday);
   if(strcasecmp(today,"friday")==0) printf("%d",friday);
   if(strcasecmp(today,"saturday")==0) printf("%d",saturday);
    return 0;
}
