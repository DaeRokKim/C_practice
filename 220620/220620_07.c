#include <stdio.h>

int main() {
    int num1 = 10;
    char c1 = 'a';
    int *numptr1 = &num1;
    char *cptr1 = &c1;

    void *ptr;  // void 포인터 선언

    // 포인터 자료형이 달라도 컴파일 경고 발생하지 않음
    ptr = numptr1;  // void 포인터에 int 포인터 저장
    ptr = cptr1;    // void 포인터에 char 포인터 저장

    numptr1 = ptr;
    cptr1 = ptr;

    return 0;
}