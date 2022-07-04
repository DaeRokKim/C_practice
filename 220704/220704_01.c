#include <stdio.h>

int main() {
    int num=20;
    const int * ptr = &num;

    printf("%d\n", num);

    num = 40;

    printf("%d\n", num);
    return 0;
}