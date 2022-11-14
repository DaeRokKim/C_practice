// 열혈 C 도전 프로그래밍 2 문제 4 복습
#include <stdio.h>
#include <string.h>

void Palin(char *param, int len);
int len(char *param);

int main()
{
    char arr[50];
    int lenth;

    printf("문자열 입력 : ");
    scanf("%s", arr);

    lenth = len(arr);
    for (int i = 0; i < lenth; i++)
    {
        printf("%c ", arr[i]);
    }
    Palin(arr, lenth);

    return 0;
}

int len(char *param)
{
    int count = 0;
    while (param[count] != '\0')
    {
        count++;
    }
    return count;
}

void Palin(char *param, int len)
{
    int count = 0;

    for (int i = 0; i < (len / 2); i++)
    {
        if (param[i] == param[len - 1 - i])
        {
            count++;
        }
    }

    if (count == (len / 2))
    {
        printf("회문입니다. \n");
    }
    else
    {
        printf("회문이 아닙니다. \n");
    }
}