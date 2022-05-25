#include <stdio.h>

int NumberCompare(int num1, int num2);

int main(void) {
    printf("3, 4 중에 큰 수는 %d \n", NumberCompare(3,4));
    printf("7, 2 중에 큰 수는 %d \n", NumberCompare(7,2));

    return 0;
}

int NumberCompare(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}