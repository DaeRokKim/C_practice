#include <stdio.h>

void ShowAray(int *param, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", param[i]);
    }
    printf("\n");
}

void AddAray(int *param, int len, int add)
{
    for (int i = 0; i < len; i++)
    {
        param[i] += add;
    }
}

int main()
{
    int arr[3] = {1, 2, 3};
    int len = sizeof(arr) / sizeof(int);

    AddAray(arr, len, 1);
    ShowAray(arr, len);

    AddAray(arr, len, 2);
    ShowAray(arr, len);

    AddAray(arr, len, 3);
    ShowAray(arr, len);

    return 0;
}