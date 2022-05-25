#include <stdio.h>

int Add(int num1, int num2) {
    return num1 + num2;
}

void ShowAddResult (int num) {
    printf("덧셈결과 출력 : %d \n", num);
}

int ReadNum(void) {
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUseThisProg(void) {
    printf("두 개의 정수를 입력하면 덧셈결과가 출려된다. \n");
    printf("자! 두 개의 정수를 입력하라 \n");
}

int main(void) {
    int result, num1, num2;
    HowToUseThisProg();
    num1=ReadNum();
    num2=ReadNum();
    result = Add(num1, num2);
    ShowAddResult(result);

    return 0;
}