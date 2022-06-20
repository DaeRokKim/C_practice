// 메모리 사용하기
#include <stdio.h>
#include <stdlib.h>     // malloc, free 함수 선언된 헤더파일

int main() {
    int num1 = 20;
    int * numptr1;

    numptr1 = &num1;

    int * numptr2;

    numptr2 = malloc(sizeof(int));      // int 크기(4바이트)만큼 동적 메모리 할당

    printf("%p\n", numptr1);            // num1 메모리 주소 출력

    printf("%p\n", numptr2);            // 새로 할당된 메모리 주소 출력

    free(numptr2);                      // 동적으로 할당된 메모리 해제

    return 0;
}

/*
일반 변수와 malloc 함수 메모리는 메모리 주소인 점은 같지만 차이가 있다
스택과 힙 두가지로 변수는 스택(stack)에 생성되고 malloc 함수는 힙(heap)에 메모리를 사용한다.

스택과 힙의 큰 차이점은 메모리 해제이다. 
스택에 생성된 변수는 사용한 뒤 따로 처리를 해주지 않아도 되지만 malloc 함수를 사용해 힙에서 할당한 메모리는 반드시 해제를 해줘야 한다.

따라서 free 함수로 메모리를 해제한다.
*/
