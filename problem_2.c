#include <stdio.h>
#include <string.h>
#include <math.h> 

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        int book =  a - b;
        printf("%d \n", book);
    } else {
        int book =  b - a;
        printf("%d \n", book);
    }
    return 0;
}