#include <stdio.h>

int main() {
    int * numptr;
    int num1 = 10;

    numptr = &num1;

    printf("%d\n", numptr);     // 메모리 주소
    printf("%d\n", *numptr);    // 값

    return 0;
}