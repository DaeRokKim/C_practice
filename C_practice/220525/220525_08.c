// codeup 1088
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        if (i%3==0) {
            continue;
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}