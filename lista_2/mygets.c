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
    char tex[MAX];
    int tam = MAX;
    printf("Digite uma frase: \n");
    mygets(tex, tam);
    printf("\n%s\n", tex);
}