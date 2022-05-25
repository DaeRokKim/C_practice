// 열혈 C, 8-2-1 문제
#include <stdio.h>

int main() {
    int i,j;

    for (i=1; i<=9; i++) {
        for (j=1; j<=i; j++) {
            if (i % 2 == 0) {
                printf("%d*%d=%d\n", i, j, i*j);
            }
        }
    }

    return 0;
}