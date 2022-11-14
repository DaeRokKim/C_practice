#include <stdio.h>

int main()
{
    int arr1[5];
    int arr2[5];

    printf("1");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("2");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d %d \n", arr1[i], arr2[i]);
    }

    return 0;
}