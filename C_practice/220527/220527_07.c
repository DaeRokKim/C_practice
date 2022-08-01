// 문자열 끝에 null 문자가 필요한 이유
#include <stdio.h>

int main() {
    char str[50] = "I like C programming";
    printf("string : %s \n", str);      // I like C programming 

    str[8]='\0';
    printf("string : %s \n", str);      // I like C 

    str[6]='\0';
    printf("string : %s \n", str);      // I like
    
    str[1]='\0';
    printf("string : %s \n", str);      // I

    return 0;
}

/* 
출력 결과를 보면 null 문자를 중간에 넣어주면 
null 문자로 변경한 위치를 기준으로 문자열이 출력된다.
*/