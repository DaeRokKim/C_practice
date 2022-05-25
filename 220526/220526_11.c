// 도전 프로그래밍1 도전 3
// 최대 공약수 (GCD) 구하기
#include <stdio.h>

int GCD(int n, int m) {
    int i;
    for (i=n; i>1; i--) {
        if (n%i==0 && m%i==0) {
            return i;
        }
    }
}

int main() {
    int i, j, n, m;

    printf("숫자 두 개 입력 : ");
    scanf("%d %d", &n, &m);

    if (n>m) {
        printf("최대공약수 : %d\n", GCD(n,m));
    } else {
        printf("최대공약수 : %d\n", GCD(m,n));
    }

    return 0;
}