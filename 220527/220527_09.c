// 열혈 C 11-2-2
// 단어 역순으로 변경하기
#include <stdio.h>

int main() {
    char voca[50];
    int i, len=0;
    char temp;

    printf("단어 입력 : ");
    scanf("%s", voca);

    while (voca[len]!='\0') len++;

    for (i=0; i<len/2; i++) {
        temp = voca[i];
        voca[i] = voca[(len-i)-1];
        voca[(len-i)-1]=temp;        
    }
    printf("뒤집힌 영단어 : %s \n", voca);

    return 0;
}