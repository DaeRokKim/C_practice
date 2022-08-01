#include <stdio.h>

int main() {
    int * numptr;
    int num1 = 10;

    numptr = &num1;

    printf("%d\n", numptr);

    printf("%d\n", &num1);

    return 0;

}