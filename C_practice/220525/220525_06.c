// 1086 codeup
#include <stdio.h>

int main() {
    long long int w, h, b;
    double cal;

    scanf("%lld %lld %lld", &w, &h, &b);

    cal = w * h * b;
    cal = cal / 8 / 1024 / 1024;

    printf("%.2lf MB\n", cal);

    return 0;
}