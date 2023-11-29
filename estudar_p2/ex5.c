#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_BUFFER 32768

int main(void)
{
    FILE *fp;
    char palavra[50];
    char nomeArquivo[] = "arquivo.txt";
    char buffer[MAX_LINE_BUFFER], *p;
    int i = 0, j = 0;


    printf("Digite a palavra a ser buscada:");
    scanf("%s", palavra);

    if ((fp = fopen(nomeArquivo, "r")) == NULL){
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        fclose(fp);
        return -1;
    }

    while (!feof(fp)){
        if (fgets(buffer, MAX_LINE_BUFFER, fp) != NULL){
            i++;
            if ((p = strstr(buffer, palavra)) != NULL){
                j++;
                printf("Palavra encontrada na linha %d\n", i);
            }

        }
    }
    if (!j){
        printf("Palavra nao encontrada\n");
    }

    fclose(fp);
    return 0;
}