#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int * ptr = arr;
    int i;

    *ptr += 2; printf("%d \n", *ptr); ptr++;
    *ptr += 2; printf("%d \n", *ptr); ptr++;
    *ptr += 2; printf("%d \n", *ptr); ptr++;
    *ptr += 2; printf("%d \n", *ptr); ptr++;
    *ptr += 2; printf("%d \n", *ptr);

    return 0;
}