#include <stdio.h>

void MaxAndMin(int **dxptr, int **dnptr, int *arr);

int main()
{
    int *maxPtr;
    int *minPtr;
    int arr[5];
    int i;

    printf("배열에 들어갈 5개의 정수 입력 : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d ", &arr[i]);
    }

    MaxAndMin(&maxPtr, &minPtr, arr);

    printf("최대값 : %d, 주소 : %d \n", *maxPtr, maxPtr);
    printf("최솟값 : %d, 주소 : %d \n", *minPtr, minPtr);

    return 0;
}

void MaxAndMin(int **dxptr, int **dnptr, int *arr)
{
    int max, min, i;
    max = arr[0];
    min = arr[0];

    for (i = 1; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }

        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    *dxptr = &max;
    *dnptr = &min;
}