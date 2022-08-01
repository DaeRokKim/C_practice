// 메모리에 값 저장하기
#include <stdio.h>
#include <stdlib.h>

int main() {
    int * numptr;
    
    numptr = malloc(sizeof(int));   // int 크기만큼 메모리 할당

    * numptr = 10;                  // 포인터를 역참조 한 뒤 값 할당

    printf("%d\n", *numptr);

    free(numptr);

    return 0;
}