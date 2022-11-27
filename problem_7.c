#include <stdio.h>
#include <string.h>
#include <math.h> 

int main() {
    // football penalty shoot with string 
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("Argentina \n");
    }else if (b > a) {
        printf("Brazil \n");
    } else {
        while (a == b) {
            char s1[6], s2[6];
            int s1Sum = 0, s2Sum = 0;
            scanf("%s\n", s1);
            scanf("%s", s2);
            int len1 = strlen(s1);
            for (int i = 0; i < len1; i++) {
                if (s1[i] == '1') {
                    s1Sum++;
                }
                if (s2[i] == '1') {
                    s2Sum++;
                }
            }
            if (s1Sum > s2Sum) {
                printf("Argentina \n");
                break;
            } else if (s2Sum > s1Sum) {
                printf("Brazil \n");
                break;
            }
        }
    }
    return 0;
}
