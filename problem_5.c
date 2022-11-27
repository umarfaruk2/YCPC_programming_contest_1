#include <stdio.h>
#include <string.h>
#include <math.h> 

int main() {
    char s[21];
    while(scanf("%s",s) != EOF) {
        int len = strlen(s);
        int i = 0, j = len - 1;
        int count = 0;
        while(i < j) {
            if (s[i] != s[j]) {
                count++;
            }
            i++;
            j--;
        }
        printf("%d \n", count);
    }
    return 0;
}