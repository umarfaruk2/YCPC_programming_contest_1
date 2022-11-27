#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("%d", i);
    }
    printf("\n");
    for (int i = 1; i < n-1; i++){
        printf("%d", i+1);
        for (int j = 2; j <= n; j++) {
            if (j == n){
                printf("%d", j-i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = n; i >= 1; i--){
        if (n != 1) {
            printf("%d", i);
        }
    }
    return 0;
}