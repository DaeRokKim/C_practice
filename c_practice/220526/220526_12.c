// 도전 프로그래밍1 도전4
// 경우의 수
#include <stdio.h>

int GCD(int bbang, int ggang, int cola, int change);


int main() {
    int bbang=500, ggang=700, cola=400, change = 3500;

    printf("소유 금액 : %d\n", change);

    GCD(bbang, ggang, cola, change);
    printf("어떻게 구매하실??");
    return 0;
}

int GCD(int bbang, int ggang, int cola, int change) {
    int i, j, k;

    for (i=1; i<=(int)(change/bbang); i++) {
        for (j=1; j<=(int)(change/ggang); j++) {
            for (k=1; k<=(int)(change/cola); k++) {
                if (bbang * i + ggang * j + cola * k == 3500) {
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", i,j,k);
                }
            }
        }
    }
}