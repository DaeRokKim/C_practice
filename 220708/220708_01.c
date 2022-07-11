#include <stdio.h>

void compare(int ptr[], int len) {
    int temp;

    for (int i=0; i<len-1; i++) {
        for (int j=0; j<(len-i)-1; j++) {
            if (ptr[j]>ptr[j+1]) 
            {
                temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
            }
        }
    }
}

int main(void) {
    int arr[4] = {3, 2, 4, 1};
    int len=(sizeof(arr) / sizeof(int));

    compare(arr, len);

    for (int i=0; i<4; i++) {
        printf("%d", arr[i]);
    }

    return 0;

}

