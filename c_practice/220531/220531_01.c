#include <stdio.h>

int main() {
    int n, i, k;
    int arr[24] = {0};

    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%d", &k);
        arr[k] += 1;
    }
    for (i=1; i<24; i++) {
        printf("%d ", arr[i]);
    }
}