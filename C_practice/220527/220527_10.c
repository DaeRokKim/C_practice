// 열혈 C 문제 11-2-3
// 아스키 코드가 제일 큰 단어 출력하기
#include <stdio.h>

int main() {
    char voca[50];
    int i, asc=0, len=0;


    printf("단어 입력 : ");
    scanf("%s", voca);

    while (voca[len]!='\0') len++;

    for (i=0; i<len; i++) {
        if (asc < voca[i]) {
            asc = voca[i];
        }
    }
    printf("%c", asc);

    return 0;
}   