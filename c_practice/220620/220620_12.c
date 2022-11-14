// 메모리 내용 한번에 설정하기
#include <stdio.h>
#include <stdlib.h>     // malloc, free 함수 선언된 헤더파일
#include <string.h>     // memset 함수 선언된 헤더파일

int main() {
    long long * numptr = malloc(sizeof(long long));

    memset(numptr, 0x27, 8);    // numptr이 가리키는 메모리를 8바이트만큼 0x27로 설정

    printf("0x%llx\n", *numptr);    // 0x2727272727272727: 27이 8개 들어가 있음

    free(numptr);

    return 0;
}