#include <stdio.h>
/*  Faça um programa que leia uma matriz 
    de inteiros de 3x4 e apresente os 
    elementos em que a soma dos índices 
    i e j sejam pares. Respeite a ordem 
    de apresentação linha,coluna. */
int main(void){
    int matriz[3][4], vetor[4] = {0,0,0,0}, i, j;
    for ( i = 0, j = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
            vetor[j] += matriz[i][j];
        }
    }
}