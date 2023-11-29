#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*  Faça um programa que define um registro (struct) composto por nome(60 posições),
    telefone (15 posições) e um ponteiro para o próximo registro (do mesmo tipo do
    registro). O programa deverá ler uma lista de registros, onde a leitura encerra 
    quando for informado um nome vazio (\0 na primeira posição da string). A cada nome
    lido, o programa deverá alocar dinamicamente a memória para manter uma instancia do
    registro, atribuir os valores válidos e adicionar na lista. Após encerrar a leitura,
    o programa deverá apresentar os registros (nome e telefone) na mesma ordem que foram
    lidos. Por fim, o programa deve liberar a memória corretamente. */
typedef struct _PESSOA{
    char nome[60];
    char telefone[15];
    struct _PESSOA *prox;
}PESSOA;

int main(void){
    PESSOA *pessoa = NULL, *aux, *novo;
    char nome[60], telefone[15];
    do{
        printf("Digite o nome(Enter vazio para parar): ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; // remove o \n do nome

        if(nome[0] != '\n' && nome[0] != '\0'){
            printf("Digite o telefone: ");
            fgets(telefone, sizeof(telefone), stdin);
            telefone[strcspn(telefone, "\n")] = '\0'; // remove o \n do telefone
            
            novo = (PESSOA *) malloc(sizeof(PESSOA));
            strcpy(novo->nome, nome);
            strcpy(novo->telefone, telefone);
            novo->prox = NULL;

            if(pessoa == NULL){
                pessoa = novo;
            } else {
                aux = pessoa;
                while(aux->prox != NULL)
                    aux = aux->prox;
                aux->prox = novo;
            }
        }
    }while(nome[0]);
    
    while(pessoa){
        printf("%s - %s\n", pessoa->nome, pessoa->telefone);
        aux = pessoa;
        pessoa = pessoa->prox;
        free(aux);
    }
    return 0;
}