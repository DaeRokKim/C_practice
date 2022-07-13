#include <stdio.h>

int jegop1(int num)
{
    return num * num;
}

int jegop2(int *num)
{
    return *num * *num;
}

int main()
{
    int num = 25;
    int num1, num2;

    num1 = jegop1(num);
    printf("%d \n", num1);
    num2 = jegop2(&num);
    printf("%d \n", num2);

    return 0;
}