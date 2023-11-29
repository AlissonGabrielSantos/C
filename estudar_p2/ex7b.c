#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct _PRODUTO {
    char nome[10];
    float preco;
} PRODUTO;


int main(void){
    FILE *fp;
    char nomeArquivo[] = "preco.txt";
    PRODUTO *vet = NULL;
    char palavra[10];
    float preco, media;
    int i = 0;
    

    if( (fp=fopen(nomeArquivo,"r")) == NULL ) {
        printf("nao foi possivel ler o arquivo %s\n",nomeArquivo);
        fclose(fp);
        return -1;
    }

    while(!feof(fp)){
        if (fgetc(fp) == '\n'){
            i++;
        }
    }
    
    rewind(fp);
    if ((vet = (PRODUTO *) malloc(i * sizeof(PRODUTO))) == NULL){
        printf("Erro ao alocar memoria\n");
        free(vet);
        fclose(fp);
        return -1;
    } 

    for (int j = 0; j < i; j++){
        fscanf(fp, "%s %f", palavra, &preco);
        strcpy(vet[j].nome, palavra);
        vet[j].preco = preco;
    }

    for (int j = 0; j < i; j++){
        media += vet[j].preco;
    }
    media = media / i;

    printf("Media dos precos: %.2f\n", media);
    
    free(vet);
    fclose(fp);
}