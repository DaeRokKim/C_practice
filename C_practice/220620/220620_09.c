#include <stdio.h>

int main() {
    int *numptr1;
    int num1 = 10;
    int num2 = 20;

    numptr1 = &num1;
    printf("%d\n", *numptr1);

    numptr1 = &num2;
    printf("%d\n", *numptr1);

    return 0;
}