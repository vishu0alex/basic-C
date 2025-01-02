#include<stdio.h>

int tri(int n){
    if (n == 1 || n == 2) return 0;
    if (n == 3) return 1;

    return tri(n-3) + tri(n-2) + tri(n-1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            printf("%d ", tri(i));  
        }
    
    return 0;
}
