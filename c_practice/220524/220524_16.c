// code up 1073

# include <stdio.h>

int main() {
    int num = 1;
    
    while (num != 0) {
        scanf("%d", &num);

        if (num != 0) {
            printf("%d\n", num);
        } else {
            break;
        }
    }

    return 0;
}