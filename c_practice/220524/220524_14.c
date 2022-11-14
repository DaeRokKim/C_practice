// code up 문제

#include <stdio.h>

int main() {
    int num;

reload:
    printf("정수 입력 : ");
    scanf("%d", &num);
    printf("%d\n", num);
    if(num!=0) goto reload;

    return 0;
}