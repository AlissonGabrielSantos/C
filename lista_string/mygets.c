#include<stdio.h>
#define MAX 10

int mygets(char str[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        str[i] = getchar();
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
}

int main(void){
    char str[MAX];
    mygets(str, MAX);
    printf("%s\n", str);
}