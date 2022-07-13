#include <stdio.h>

void Odd(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void Even(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int arr[10];
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
    }

    Odd(arr, len);
    Even(arr, len);

    return 0;
}