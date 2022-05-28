// 열혈C 문제13-1-2
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int i;

    for (i=0; i<5; i++) {
        *(ptr+i) += 2;
    }

    for (i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}