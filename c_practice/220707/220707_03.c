#include <stdio.h>
#include <string.h>

void check(char* str, int len){
    int count = 1;
    
    for(int i = 0; i < len/2; i++){
        if(str[i] == str[len-count]){
            printf("%c %c True \n",str[i],str[len-count]);
        }
        else{
            printf("%c %c False \n",str[i],str[len-count]);
        }
        count++;
    }
}

int main()
{
    char *str = "noon";
    int len = strlen(str);
    
    printf("%s %d \n\n",str,len);
    
    for(int i = 0; i <= len; i++){
        printf("%c \n",str[i]);
    }
    
    check(str,len);
    
    return 0;
}