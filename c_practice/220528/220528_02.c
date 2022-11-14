//
#include <stdio.h>

int main() {
    int num=10;
    int * ptr1=&num;
    int * ptr2=ptr1;

    (*ptr1)++;
    (*ptr2)++;

    printf("%d \n", num);

    return 0;
}

/*
위 코드의 결과는 10이 나온다
ptr1 = num를 참조
ptr2 = num를 참조
결론적으로 num++를 두번한 결과값
*/
