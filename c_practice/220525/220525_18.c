// goto 제대로 쓰기
#include <stdio.h>

int main() {
    int num;
    printf("자연수 입력 : ");
    scanf("%d", &num);

    if (num==1) {
        goto ONE;
    } else if (num==2) {
        goto TWO;
    } else {
        goto OTHER;
    }

ONE:
    printf("%d 입력했다.", num);
    goto END;
TWO:
    printf("%d 입력했다.", num);
    goto END;
OTHER:
    printf("1, 2 이외에 다른 값을 입력함.");

END:
    return 0;
}
