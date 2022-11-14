#include <stdio.h>

void Swap(int n1, int n2) {
    int temp=n1;
    n1 = n2;
    n2 = temp;
    printf("n1 n2 : %d %d \n", n1, n2);
}

int main(void) {
    int num1=10;
    int num2=20;
    printf("num1 num2 : %d %d \n", num1, num2);

    Swap(num1, num2);
    printf("num1 num2 : %d %d \n", num1, num2);

    return 0;
}


/*
Swap 함수를 통해 num1, num2의 값이 변경될 것으로 예상했지만
Swap 함수에서만 잠시 바뀌고 근본적인 값은 변하지 않았다.
그 이유는 num1, num2는 n1, n2와 완전히 다르기 때문이다.
 */