// scanf를 이용한 문자열 입력
#include <stdio.h>

int main() {
    char str[50];
    int idx=0;

    printf("문자열 입력 : ");
    scanf("%s", str);
    printf("입력 받은 문자열 : %s \n", str);

    printf("문자 단위 출력 : ");
    while (str[idx] != '\0') {
        printf("%c", str[idx]);
        idx++;
    }
    printf("\n");

    return 0;
}

/*
공백이 없는 Simple을 입력하면 문제 없이 출력된다
하지만 공백이 있는 He is my friend를 입력하면 He만 출력된다
이는 null과 공백의 혼동으로 scanf는 문자열을 입력받기에 적절하지 않다.
*/