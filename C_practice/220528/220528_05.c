#include <stdio.h>

int main() {
    int arr1[3] = {1, 2, 3};
    double arr2[3] = {1.1, 2.2, 3.3};
    int i;

    printf("%d %g \n", *arr1, *arr2);
    *arr1 += 100;
    *arr2 += 120.5;

    for (i=0; i<3; i++) {
        printf("%d %g\n", arr1[i], arr2[i]);
    }
    // printf("%d %g \n", arr1[0], arr2[0]);

    return 0;

}

/* 
결과값을 확인해 보면 arrya의 0번쨰 인수는 덧셈이 적용되지만
나머지 값들은 연산이 적용되지 않는다

배열의 이름은 배열의 시작 주소 값을 의미하고, 그 형태는 값의 저장이 불가능한 상수이다.  
*/