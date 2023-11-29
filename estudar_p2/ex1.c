#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    FILE *fp;
    char nomeArquivo[] = "arq.txt";
    char ch = 0;
    
    if((fp = fopen(nomeArquivo, "a+")) == NULL){
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        fclose(fp);
        return -1;
    }
    
    printf("Digite os caracteres (0 para parar): ");
    do {
        ch = getchar();
        if (ch != '0'){
            fputc(ch, fp);
        }
    } while (ch != '0');
    
    fseek(fp, 0, SEEK_SET);

    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    printf("\n");
    
    fclose(fp);
}