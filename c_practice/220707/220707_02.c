#include <stdio.h>

void compare(int * ptr, int len) {
    int temp;

    for (int j=0; j<len-1; j++) {
        for (int i=0; i<(len-i)-1; i++) {
            if (ptr[i]>ptr[i+1]) {
                temp = ptr[i];
                ptr[i] = ptr[i+1];
                ptr[i+1] = temp;
            }
        }
    }
}

// int str_len(int * ptr) {
//     int i = 0;
//     while (ptr[i] != '\0') {
//         i++;
//     }

//     return i;
// }

int main() {
    int arr[4] = {3, 2, 4, 1};
    int len, n;

    // for (int i=0; i<10; i++) {
    //     if (n != 0) {
    //         printf("정수 입력 : ");
    //         scanf("%d", &n);
    //         arr[i] = n;
    //     }
    //     else {
    //         break;
    //     }
    // }



    len = sizeof(arr) / sizeof(int);

    compare(arr, len);

    for (int i=0; i<len; i++) {
        printf("%d", arr[i]);
    }

    return 0;
}