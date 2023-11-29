#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char nomeArquivo[] = "resultado.txt";
    char arquivo1[] = "arq.txt";
    char arquivo2[] = "arquivo.txt";
    char ch;
    FILE *fp, *fp1, *fp2;

    if((fp = fopen(nomeArquivo, "w")) == NULL){
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        fclose(fp);
        return -1;
    }
    if((fp1 = fopen(arquivo1, "r")) == NULL){
        printf("Erro ao abrir o arquivo %s\n", arquivo1);
        fclose(fp);
        fclose(fp1);
        return -1;
    }
    if((fp2 = fopen(arquivo2, "r")) == NULL){
        printf("Erro ao abrir o arquivo %s\n", arquivo2);
        fclose(fp);
        fclose(fp1);
        fclose(fp2);
        return -1;
    }

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp);
    fputc('\n', fp);
    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp);     

    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    
}