#include <stdio.h>

/*
Dados um vetor com a capacidade de 33 elementos, sendo que os 32 primeiros elementos 
representam dígitos binários (0,1) e o 33 o terminador da string. O conteúdo deverá 
ser lido como uma String (fgets).

Apresente-os formatando-os de forma que sejam apresentados blocos de 4 dígitos e um 
espaço entre os 8 blocos.
*/
void form(char bin[]){
    for(int i = 0; bin[i] != '\0'; i++){
        if ((i % 4 == 0) && (i != 0))
            printf(" ");
        printf("%c", bin[i]);
    }
    printf("\n");
}

int main(){
    char string[33] = {0};
    fgets(string, 33, stdin);
    form(string);
    return 0;
}