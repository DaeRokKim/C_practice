#include <stdio.h>

int zeze1(int num) {
    return num*num; 
}

void zeze2(int * ptr) {
    int num = * ptr;
    *ptr = num*num;
}

int main() {
    int num = 10;
    printf("%d \n", zeze1(num));
    zeze2(&num);
    printf("%d \n", num);

    return 0;
}