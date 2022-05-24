// 포인터와 변수
#include <stdio.h>

int main() {
    int *numPtr;
    int num1 = 10;

    numPtr = &num1;

    printf("%p\n", numPtr);
    printf("%p\n", &num1);      // &을 안 넣어줬드만 다른 값이 나온다
    printf("%d\n", *numPtr);    // *을 안 넣어주면 다른 변수로 인식

    return 0;
}