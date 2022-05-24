// 1090 codeup
#include <stdio.h>

int main() {
    int a, r, n;
    long long int v=1, i, result;

    scanf("%d %d %d", &a, &r, &n);

    for (i=2; i<=n; i++) {
        v = v*r;
    }

    result = a*v;

    printf("%lld", result);

    return 0;
}