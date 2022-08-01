// 
#include <stdio.h>

int main() {
    int arr[3]={15, 25, 35};
    int * ptr = &arr[0]; // *ptr = &arr과 동일
    int i;

    for (i=0; i<3; i++) {
        printf("%d %d \n", ptr[i], arr[i]);
    }
    printf("%d %d \n", *ptr, *arr);

    return 0;        
}