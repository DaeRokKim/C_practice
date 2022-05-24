# include <stdio.h>

int main() {
    int sum=0, i, num;

    scanf("%d", &num);

    for (i=1; i<=num; i++) {
        sum += i;
        if (sum >= num) {
            printf("%d", i);
            break;
        }
    }

    return 0;
}