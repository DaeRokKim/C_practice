#include <stdio.h>

int main()
{
    int student_grade = 0, subject_grade = 0;

    int arr[5][5] = {
        {5, 4, 6, 5, NULL},
        {3, 6, 9, 3, NULL},
        {4, 8, 2, 7, NULL},
        {3, 8, 9, 7, NULL},
        {NULL, NULL, NULL, NULL, NULL}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("%d ", arr[i][j]);
            arr[i][4] += arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[4][j] += arr[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}