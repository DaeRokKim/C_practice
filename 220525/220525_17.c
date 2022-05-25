// switch문 구성과 기본기능
#include <stdio.h>

int main() {
    int num;
    printf("1이상 5 이하의 정수 입력\n");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
        printf("1은 ONE \n");
        break;

    case 2:
        printf("2는 TWO \n");
        break;

    case 3:
        printf("3은 Three \n");
        break;
    
    case 4:
        printf("4는 Four \n");
        break;

    case 5:
        printf("5는 Five \n");
        break;

    default:
        printf("I don't know! \n");
    }

    return 0;
}