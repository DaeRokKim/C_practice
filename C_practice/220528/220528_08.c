//
#include <stdio.h>

int main() {
    int arr[3] = {11, 22, 33};
    int * ptr = arr;
    
    printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); 
    printf("\n");

    return 0;
}

/*
포인터 = 배열
포인터는 주소를 가리키고 있음으로 ptr++ 연산을 하면 주소를 이동한다고 볼 수 있다.
ptr = arr[0]
ptr + 1 = arr[1]
ptr + 2 = arr[2]
*/