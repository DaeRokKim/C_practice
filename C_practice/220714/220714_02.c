#include <stdio.h>

int main()
{
    int num, j = 3;
    int arr[4];

    printf("10 진수 입력 : ");
    scanf("%d", &num);

    while (num != 0)
    {
        arr[j] = num % 2;
        num /= 2;
        j--;

        // if (num == 1 || num == 0)
        // {
        //     arr[0] = num;
        //     break;
        // }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}