// 열혈C 문제 13-1-4
#include <stdio.h>

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int * ptr1 = &arr[0];
    int * ptr2 = &arr[5];
    int i, j;

    for (i=0; i<3; i++) {
        j = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = j;
        ptr1++;
        ptr2--;
    }

    for (i=0; i<6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}