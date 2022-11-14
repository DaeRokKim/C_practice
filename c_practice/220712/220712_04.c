#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int sum = 0;

    for (int i = 4; i >= 0; i--)
    {
        sum += *(ptr + i);
    }

    printf("%d", sum);

    return 0;
}