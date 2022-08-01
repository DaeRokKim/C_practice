// codeup 1078
# include <stdio.h>

int main() {
    int sum = 0;
    int n, i;

    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        if (i % 2 == 0) sum += i;
    }
    printf("%d", sum);

    return 0;
}
