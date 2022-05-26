// 열혈 C 문제 11-2-1
#include <stdio.h>

int main() {
    char str[50];
    int len = 0;

    printf("영단어 입력 : ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    printf("%d", len);

    return 0;
}