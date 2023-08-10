#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int num;
    gets(str1);
    gets(str2);
    num = strcmp(str1, str2);
    if (num == 0){
        printf("0");
    }else if(num < 0){
        printf("-1");
    }else{
        printf("1");
    }
}