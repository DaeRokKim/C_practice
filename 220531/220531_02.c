#include <stdio.h>

int main() {
    int n, i, k;
    int arr[10000];

    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        scanf("%d", &k);
        arr[i] = k;
    }

    for (i=n; i>=1; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}