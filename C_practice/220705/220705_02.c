#include <stdio.h>

void find_odd(int * ptr) {
    int i;
    int * pptr = ptr;

    printf("\n홀수 출력 : ");
    for (i=0; i<10; i++) {
        if (ptr[i] % 2 != 0){
            printf("%d ", ptr[i]);
        }
    }
}

void find_even(int * ptr) {
    int i;
    int * pptr = ptr;

    printf("\n짝수 출력 : ");
    for (i=0; i<10; i++) {
        if (ptr[i] % 2 == 0){
            printf("%d ", ptr[i]);
        }
    }
}

int main() {
    int arr[10];
    int i, num;
    int * ptr = arr;

    for (i=0; i<10; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    find_odd(ptr);
    find_even(ptr);
    
    return 0;
}