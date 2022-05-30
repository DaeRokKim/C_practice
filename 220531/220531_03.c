#include <stdio.h>

int main() {
    int n, i, k=24;
    int arr[10000];

    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%d ", &arr[i]);
    }

    for (i=0; i<n; i++) {
        if (arr[i] < k) {
            k = arr[i];
        }
    }
        
    printf("%d ", k);

    return 0;
}