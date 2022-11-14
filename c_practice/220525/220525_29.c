// 열혈 C 문제 9-1-3
#include <stdio.h>

void Fibo(int num) {
    int f1=0, f2=1, f3, i;
    if (num==1) {
        printf("%d ", f1);
    } else {
        printf("%d %d ", f1, f2);
    }
    for (i=0; i<num-2; i++) {
        f3 = f1 + f2;
        printf("%d ", f3);
        f1=f2;
        f2=f3;
    }
}


int main(void) {
    int n;
    printf("출력할 피보나치 수열 갯수 : ");
    scanf("%d", &n);
    if (n<1) {
        printf("1 이상의 값을 입력 \n");
        return -1;
    }
    Fibo(n);
    return 0;
}