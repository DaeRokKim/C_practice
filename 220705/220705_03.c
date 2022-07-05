// 재귀함수를 사용해 10진수 2진수로 바꾸기
#include <stdio.h>

void f(int n) {
    if (n>1) f(n/2);
    printf("%d", n%2);
}

int main() {
    int n;
    scanf("%d", &n);
    f(n);
}