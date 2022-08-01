// 열혈C 문제 13-1-3
#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[4];
    int i, sum=0;


    for (i=0; i<5; i++) {
        sum += *ptr;
        *ptr--;
    }

    printf("%d", sum);

    return 0;

}