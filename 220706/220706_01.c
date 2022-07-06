#include <stdio.h>
#include <string.h>

void check_pal(char * ptr, int len) {
    int i, j=-1;

    for (i=0; i<len/2; i++) {
        if (ptr[i] == ptr[len+j]) {
            // printf("%c ", *ptr[i]);
            printf("True\n");
        }
        else {
            // printf("%c ", *ptr[i]);
            printf("False\n");
        }
        j--;
    }
}

int main() {
    int len;
    char arr;

    printf("문자열 입력 : ");
    scanf("%s", arr);

    len = strlen(arr);

    check_pal(arr, len);
}