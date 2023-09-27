#include <stdio.h>

//E22) Faça uma função que receba um vetor de char e um número e retorne no vetor os 
//valores ‘0’ e ‘1’ correspondente ao valor binário de cada posição do número. Considere 
//números de até 32 bits. (Considere o vetor com 33 posições). Preserve os zeros a direita 
//do digito significativo.

int binario(int num, char vet[33]){
    for (int i = 32; i >= 0; i--){
        vet[i] = (num & 1) + '0';
        num  >>= 1;
    }
    vet[33] = '\0';
}

int main(){
    char vet[33] = {0};
    int num = 3;

    binario(num, vet);
    printf("%s \n", vet);
}