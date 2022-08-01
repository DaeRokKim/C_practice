// 도전 프로그래밍1 도저8
// 재귀함수 2의 n승 구하기
#include <stdio.h>

int jegop(int n) {
    if (n == 0) {
        return 1;
    }
    return jegop(n-1) * 2;
}

int main() {
    int n;

    printf("정수 입력 : ");
    scanf("%d", &n);

    printf("2의 %d승은 %d", n, jegop(n));

    return 0;
}