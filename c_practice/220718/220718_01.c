#include <stdio.h>

void MaxAndMin(int **maxPtr, int **minPtr, int size, int *arr)
{
    int *max;
    int *min;
    int i;

    max = min = &arr[0];

    for (i = 1; i < size; i++)
    {
        if (*max < arr[i])
            max = &arr[i];

        if (*min > arr[i])
            min = &arr[i];
    }

    *maxPtr = max;
    *minPtr = min;
}

int main()
{
    int *maxPtr;
    int *minPtr;
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("%d번 정수 입력 \n", i + 1);
        scanf("%d", &arr[i]);
    }

    MaxAndMin(&maxPtr, &minPtr, sizeof(arr) / sizeof(int), arr);

    printf("max : %d, min : %d \n", maxPtr, minPtr);

    return 0;
}