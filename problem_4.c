#include <stdio.h>
#include <string.h>
#include <math.h> 

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == b) {
        printf("Draw \n");
    } else if (a > b) {
        printf("Argentina \n");
    } else {
        printf("Brazil \n");
    }
    return 0;
}