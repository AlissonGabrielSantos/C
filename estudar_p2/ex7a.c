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
    PRODUTO produtos[] = 
    {
        {"leite", 4.99},
        {"amendoa", 12.0},
        {"shampoo", 24.99},
        {"cond.", 26.99},
        {"feijao", 6.99},
        {"arroz", 12.40},
        {"carne", 7.0},
        {"chips", 8.0},
        {"refri", 10.0}
    };

    if( (fp=fopen(nomeArquivo,"wb")) == NULL ) {
        printf("nao foi possivel criar o arquivo %s\n",nomeArquivo);
        fclose(fp);
        return -1;
    }

    for (int i = 0; i < 9; i++){
        fprintf(fp, "%s\t%f\n", produtos[i].nome, produtos[i].preco);
    }

    fclose(fp);
}