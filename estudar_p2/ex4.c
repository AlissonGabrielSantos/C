#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Desenvolver um programa em C que lê o conteúdo de um arquivo e cria um arquivo com o
mesmo conteúdo, mas com todas as letras minúsculas convertidas para maiúsculas.
Os nomes dos arquivos serão fornecidos, via teclado, pelo usuário na linha de comando. */
int main(void){
    FILE *fp, *fp1;
    char nomeArquivo[] = "arq.txt";
    char nomeArquivo1[] = "arq1.txt";
    int ch;

    if((fp = fopen(nomeArquivo, "r")) == NULL){
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        exit(1);
    }
    if((fp1 = fopen(nomeArquivo1, "w")) == NULL){
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo1);
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF){
        if (ch != '\n' && ch != '\0' && ch != ' ' && ch < 'Z')
            ch += 32;
        fputc(ch, fp1);
    }
    fclose(fp);
    fclose(fp1);
}