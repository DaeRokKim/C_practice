// 도전 프로그래밍2 도전4
// 드릅게 어렵네
// 회문 문제
#include <stdio.h>
#include <string.h>

void check_pal(char * ptr, int len) {
    int i, j=-2;
    char temp;
    char * check_p;

    for (i=0; i<len/2; i++) {
        // temp = ptr[i];
        // check_p[j] = temp;
        // j--;
        if (ptr[i]!=ptr[j]) {
            printf("%s는 회문이 아닙니다", ptr);
            return ;
        }
        j--;
    }
    printf("%s는 회문입니다", ptr);
    return;

    // if (*ptr == *check_p) {
    //     printf("True");
    // }
    // else {
    //     printf("False");
    // }
}

int main() {
    char * ptr;
    int len;

    len = strlen(ptr);

    printf("문자열 입력 : ");
    scanf("%s", *ptr);

    check_pal(ptr, len);

    return 0;
}