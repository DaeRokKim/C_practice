// 도전 프로그래밍1 도전7
// 2^k <= n을 만족하는 프로그래밍
#include <stdio.h>

int main() {
    int i, n, k=0;

    printf("N을 입력하시오 : ");
    scanf("%d", &n);

    if (n==1) {
        printf("k=0");
        goto END;
    }

    while (n/2!=0) {
        n /= 2;
        k++;
    }
    printf("%d", k);

END:
    return 0;
}
