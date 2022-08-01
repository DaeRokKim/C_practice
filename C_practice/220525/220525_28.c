#include <stdio.h>

double CelToFah(double c);
double FahToCel(double f);
char SelectUnit(char c);
int GetValue(int num, char c);

int main(void) {
    int sel;
    double num;
    printf("1. F to C 2. C to F\n");
    scanf("%d", &sel);

    if (sel == 1) {
        printf("F 입력 \n");
        scanf("%lf", &num);
        printf("C : %.2lf \n", FahToCel(num));
    } else if (sel == 2) {
        printf("C 입력 \n");
        scanf("%lf", &num);
        printf("F : %.2lf \n", CelToFah(num));
    } else {
        printf("똑바로 해라\n");
    }

    return 0;
}

double CelToFah(double c) {
    return (1.8 * c) + 32;
}

double FahToCel(double f) {
    return (f - 32) / 1.8;
}
