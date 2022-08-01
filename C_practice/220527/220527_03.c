// 열혈 C 문제 11-1-1 

#include <stdio.h>

int main() {
    int arr[5], i;
    int min, max, arrLen, sum=0;

    printf("값 5개 입력\n");

    for (i=0; i<5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    min = arr[0];
    max = arr[0];

    for (i=1; i<5; i++) {
        if (min > arr[i]) {
            min = arr[i];
        } 
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    arrLen = sizeof(arr) / sizeof(int);

    for (i=0; i<arrLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("입력된 정수 중 최댓값 : %d\n", max);
    printf("입력된 정수 중 최솟값 : %d\n", min);
    printf("입력된 정수의 총 합 : %d\n", sum);

    return 0;
}