// codeup 1085
#include <stdio.h>

int main() {
    long long int h, b, c, s;
    double cal;

    scanf("%lld %lld %lld %lld", &h, &b, &c, &s);

    cal = h*b*c*s;
    cal = cal/8/1024/1024;

    printf("%.1lf MB", cal);

    return 0;

}

// 이해가 안된다
// cal = (h*b*c*s)/8/1024/1024;
// 이렇게하면 한번에 연산이 안되서 그런건지 잘 못된 결과값이 나온다