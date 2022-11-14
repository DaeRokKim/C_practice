// 다양한 자료형의 포인터 선언
#include <stdio.h>

int main() {
    long long * numptr1;
    float * numptr2;
    char * cptr1;

    long long num1 = 10;
    float num2 = 3.5f;
    char c1 = 'a';

    numptr1 = &num1;
    numptr2 = &num2;
    cptr1 = &c1;

    printf("lld\n", *numptr1);
    printf("%f\n", *numptr2);
    printf("%c\n", *cptr1);

    return 0;
}