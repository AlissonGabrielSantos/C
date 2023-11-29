#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  Faça um programa que receba da linha de comando o nome de um arquivo (como parâmetro)
    leia o arquivo, e apresente na tela o conteúdo do arquivo.
    
*/

int main(int argc, char *argv[]) {
    FILE *arq;
    char c;
    if (argc != 2) {
        printf("Erro na chamada do comando.\n");
        printf("Uso: %s <ARQUIVO ORIGEM>.\n", argv[0]);
        return 1;
    }

    arq = fopen(argv[1], "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((c = fgetc(arq)) != EOF) {
        printf("%c", c);
    }

    printf("\n");
    fclose(arq);
    return 0;
}