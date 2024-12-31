#include<stdio.h>

long long int powe(int base,int power){
    printf("power called (%d,%d)\n",base,power);
    if(power==0){
    return 1;
    }

    
   long long int m= base*powe(base,power-1);
    printf("returns (%d,%d)=%lld\n",base,power,m);
    return m;
}

int main(){
     int base,power;
     scanf("%d%d",&base,&power);
    printf("%lld",powe(base,power));

     return 0;
}
