// 열혈 C 문제 11-1-2
#include <stdio.h>

int main() {
    // char arr[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
    char arr[] = "Good time";
    int i, arrLen;

    arrLen = sizeof(arr) / sizeof(char);

    for (i=0; i<arrLen; i++) {
        printf("%c", arr[i]);
    }

    return 0;
}