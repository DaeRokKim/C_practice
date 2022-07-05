// 배열을 사용해 10진수 2진수로 바꾸기
#include <stdio.h>

int main() {
    int n, i;
    int arr[8];

    scanf("%d", &n);
    
    for (i=7; i>-1; i--) {
        arr[i] = (n%2);
        n = n/2;
    }

    for (i=0; i<8; i++) {
        printf("%d", arr[i]);
    }
    
    return 0;

}