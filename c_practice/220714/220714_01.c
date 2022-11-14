// 열혈C 도전 프로그래밍 2 3번 복습
#include <stdio.h>

int main()
{
    int arr[10];
    int j = 0, k = 9, num;

    printf("정수 10개 입력 : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            arr[k] = num;
            k--;
        }
        else
        {
            arr[j] = num;
            j++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}