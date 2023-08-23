#include <stdio.h>
#include <string.h>
#define MAX 30

int mygets(char str[], int tamanho){
    int i = 0;
    unsigned char c = 0;
    while(c != '\n' && i < tamanho){
        c = getchar();
        printf("%d %c ", c, c);
        if(c){
        str[i] = c;
        i++;
        }
    }
    str[i] = '\0';
    return 0;
}

int main(){
    char tex[MAX];
    int tam = MAX;
    printf("Digite uma frase: ");
    printf("\n");
    mygets(tex, tam);
    printf("\n%s\n", tex);
    return 0;
}