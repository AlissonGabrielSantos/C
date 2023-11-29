#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_BUFFER 90

int main(void){
    FILE *fp, *pf;
    char arquivo[] = "arq.txt";
    char oviuqra[] = "qra.txt";
    long pos = 0;

    if((fp = fopen(arquivo, "r")) == NULL){
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        fclose(fp);
        return -1;
    }
    if((pf = fopen(oviuqra, "w")) == NULL){
        printf("Erro ao abrir o arquivo %s\n", oviuqra);
        fclose(fp);
        fclose(pf);
        return -1;
    }
    fseek(fp, 0, SEEK_END);
    pos = ftell(fp);
    do{
        pos--;
        fseek(fp, pos, SEEK_SET);
        fputc(fgetc(fp), pf);
    }while (pos != 0);

    fclose(fp);
    fclose(pf);
}