#include <stdio.h>

int str_len(char * ptr) {
    int cnt = 0;

    while (ptr[cnt] != '\0') {
        cnt++;
    }
    return cnt;
}

int main() {
    char arr[10];
    int len, i, count=0;

    printf("문자열 입력 : ");
    scanf("%s", arr);

    len = str_len(arr);

    for (i=0; i<len/2; i++) {
        if (arr[i] == arr[len-i-1]) {
            count++;
        }
    }

    if (count == len/2) {
        printf("회문입니다.");
    }
    else {
        printf("회문이 아닙니다.");
    }

    return 0;
}