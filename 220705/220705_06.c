// 도전 프로그래밍2 도전4
// 드릅게 어렵네
// 회문 문제
#include <stdio.h>

void check_Pal(char * ptr) {
    int len = sizeof(*ptr) / sizeof(char);
    int i, j=-1;
    char temp;
    char * check_p;

    for (i=0; i<len; i++) {
        temp = ptr[i];
        check_p[j]=temp;
    }

    if (*ptr == *check_p) {
        printf("참");
    }
    else {
        printf("거짓");
    }
}

int main() {
    char * ptr;

    printf("문자열 입력 : ");
    scanf("%s", *ptr);

    check_Pal(ptr);

    return 0;
}