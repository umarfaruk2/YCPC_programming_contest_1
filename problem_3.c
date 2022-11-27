#include <stdio.h>
#include <string.h>
#include <math.h> 

int main() {
    // power of 2's
    int t;
    long long int n; 
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%lld", &n);
        for (int i = 0; i <= n; i++) {
            long long int num = pow(2, i);
            if (n == num) {
                printf("%lld \n", num);
                break;
            } else if (n < num) {
                printf("%lld \n", num);
                break;
            }
        }
    }
    return 0;
}

