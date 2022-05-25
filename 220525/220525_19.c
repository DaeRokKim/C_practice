// 열혈 C, 8-1-1 문제

#include <stdio.h>

int main() {
    int i, num;

    for (i=1; i<=100; i++) {
        if (i % 7 == 0 || i % 9 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}