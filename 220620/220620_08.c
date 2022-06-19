// 이중 포인터 사용하기
#include <stdio.h>

int main() {
    int * numptr1;
    int ** numptr2;
    int num1 = 10;

    numptr1 = &num1;
    numptr2 = &numptr1;

    printf("%d\n", **numptr2);

    return 0;
}


/* 
포인터도 변수이기 때문에 주소를 참조할 수 있다
하지만 포인터의 주소를 참조하기 위해서는 일반적인 포인터가 아닌 이중 포인터를 사용해야 한다.
따라서 **를 사용한 이중포인터를 가지고 포인터 주소를 참조
num1 -> numptr1 -> numptr2로 참조했으며, 
numptr2를 불러올 떄는 numptr2 <- numptr1 <- num1
*/
