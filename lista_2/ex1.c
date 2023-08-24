#include <stdio.h>
#define MAX 30
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
    int i = 0;
    printf("Digite uma frase: ");
    mygets(str, MAX);
    while(str[i]){
        i++;
    }
    printf("O tamanho da string é: %d\n", i);
}