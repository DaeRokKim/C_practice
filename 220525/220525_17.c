// switch�� ������ �⺻���
#include <stdio.h>

int main() {
    int num;
    printf("1�̻� 5 ������ ���� �Է�\n");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
        printf("1�� ONE \n");
        break;

    case 2:
        printf("2�� TWO \n");
        break;

    case 3:
        printf("3�� Three \n");
        break;
    
    case 4:
        printf("4�� Four \n");
        break;

    case 5:
        printf("5�� Five \n");
        break;

    default:
        printf("I don't know! \n");
    }

    return 0;
}