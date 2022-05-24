// codeup 1087
# include <stdio.h>

int main() {
    int n, sum, i;

    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        sum += i;
        if (sum >= n) {
            printf("%d", sum);
            break;
        }
    }

    return 0;
}