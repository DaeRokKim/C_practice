// 도전프로그래밍1 도전 2
#include <stdio.h>

int gugu(int num1, int num2) {
    int i, j;

    for (i=num1; i<=num2; i++) {
        for (j=1; j<=9; j++) {
            printf("%dx%d=%d\n", i, j, i*j);
        }
    }
}

int main() {
    int num1, num2, i, j;

    printf("숫자 입력 :");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        gugu(num2, num1);
    } else {
        gugu(num1, num2);
    }

    return 0;
}