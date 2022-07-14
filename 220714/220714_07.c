#include <stdio.h>

int main()
{
    int Arr[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int Brr[4][2];
    int i, j;

    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         Brr[j][i] = Arr[i][j];
    //     }
    //     printf("\n");

    //     for (j = 2; j < 4; j++)
    //     {
    //         Brr[j][i] = Arr[i][j];
    //         // printf("%d ", Brr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            Brr[j][i] = Arr[i][j];
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%2d ", Brr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}