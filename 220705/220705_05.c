#include <stdio.h>

int main() {
    int n, i, h=0, j=9;
    int arr[10];
    // int * ptr = arr;

    for (i=0; i<10; i++) {
        scanf("%d", &n);
        if (n%2 != 0) {
            arr[h] = n;
            h++;
        }
        else {
            arr[j] = n;
            j--;
        }
    }

    for (i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}