#include <stdio.h>
#include <stdlib.h>

/*  02) Faça um programa em Linguagem C que receba do usuário um arquivo, 
    e mostre na tela quantas linhas esse arquivo possui. */

int main(void){
    FILE *fp;
    char nomeArquivo[] = "arquivo.txt";
    char ch;
    int i = 1;

    if((fp = fopen(nomeArquivo, "r")) == NULL){
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        fclose(fp);
        return -1;
    }

    while(!feof(fp)){
        ch = fgetc(fp);
        if (ch == '\n'){
            i++;
        }
    }
    
    printf("O arquivo %s possui %d linhas.\n", nomeArquivo, i);
    fclose(fp);
    return 0;
}