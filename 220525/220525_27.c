// 열혈 C 문제 9-1-1
#include <stdio.h>

int GetNum(void) {
    int num;
    scanf("%d", &num);

    return num;
}

int Compare(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

int main(void) {
    int num1, num2, num3, result;
    num1 = GetNum();
    num2 = GetNum();
    num3 = GetNum();
    result = Compare(Compare(num1, num2), num3);
    printf("%d", result);

    return 0;
}