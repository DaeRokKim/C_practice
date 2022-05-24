#include <stdio.h>

int main() {
    int *numPtr;
    int num1 = 10;

    numPtr = &num1;

    *numPtr = 20;

    printf("%d\n", *numPtr);    // 20으로 변경
    printf("%d\n", num1);       // num1도 같이 20으로 변경

    return 0;
}