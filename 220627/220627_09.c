// 상수 형태의 문자열을 가리키는 포인터
#include <stdio.h>

int main() {
    char str1[] = "My String";
    char * str2 = "Your String";
    printf("%s %s \n", str1, str2);

    str2 = "Our String";
    printf("%s %s \n", str1, str2);

    str1[0] = 'X';
    // str2[0] = 'X'; // 주석을 풀면 에러가 난다.
    printf("%s %s \n", str1, str2);

    return 0;
}