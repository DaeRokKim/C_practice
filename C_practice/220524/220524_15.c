// 코드업 문제 1072
# include <stdio.h>

int main() {
    int n, m;

    scanf("%d", &n);

label:
    if (n-- != 0) {
        scanf("%d", &m);
        printf("%d\n", m);
        goto label;
    }

    return 0;
}