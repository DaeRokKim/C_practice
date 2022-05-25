// 도전 프로그래밍1 도전5
// 소수 출력
#include <stdio.h>

int main() {
    int i,j,cnt=0,k;

    for (i=1; cnt<10; i++) {
        for (j=2; j<=i; j++) {
            if (i%j==0 && j!=i) {
                break;
            }
            else if (i==j) {
                printf("%d ", i);
                cnt++;
            } else continue;
        }
    }

    return 0;
}