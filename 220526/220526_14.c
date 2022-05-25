// 도전 프로그래밍1 도전6
// 초를 입력 받아 시:분:초로 출력
#include <stdio.h>

int main() {
    int sec, m, h;

    printf("초(second)를 입력하세요\n");
    scanf("%d", &sec);

    h = sec / 3600;
    m = (sec%3600)/60;
    sec = (sec%3600)%60;

    printf("[%d시 %d분 %d초]", h,m,sec);

    return 0;
}