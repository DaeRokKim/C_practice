// codeup 1082
# include <stdio.h>

int main() {
    int n, i;

    scanf("%X", &n);

    for (i=1; i<=15; i++) {
        printf("%X*%X=%X\n", n, i, n*i);
    }

    return 0;
}