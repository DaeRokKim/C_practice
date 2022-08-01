#include <stdio.h>

void Bunryu(int *ptr, int len)
{
    int aray[10];
    int j = 0, k = 9;

    for (int i = 0; i < len; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            aray[k] = ptr[i];
            k--;
        }
        else
        {
            aray[j] = ptr[i];
            j++;
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", aray[i]);
    }
}

int main()
{
    int arr[10];

    printf("정수 입력 : ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr);
    }

    Bunryu(arr, 10);

    return 0;
}