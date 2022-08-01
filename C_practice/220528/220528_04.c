
#include <stdio.h>

int main() {
    int arr[3] = {0,1,2};
    printf("배열의 이름 : %p \n", arr);
    printf("첫 번째 요소 : %p \n", &arr[0]);
    printf("두 번째 요소 : %p \n", &arr[1]);
    printf("세 번째 요소 : %p \n", &arr[2]);
    // arr = &arr[i]; // 이 문장은 컴파일 에러를 일으킨다.

    return 0;
}

// 결과값을 보면 int의 크기가 4byte이기 떄문에 주소가 4byte 차이가 난다