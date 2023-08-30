#include <stdio.h>
/*  Faça um programa que leia uma matriz 
    de inteiros de 3x4 e apresente a soma 
    de cada coluna. A saída deverá ter um 
    número por linha. */
int main(void){
    int matriz[3][4], vetor[4] = {0,0,0,0};
    for (int i = 0, j = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
            vetor[j] += matriz[i][j];
        }
    }
    for (int i = 0; i < 4; i++){
        printf("%d\n", vetor[i]);
    }
}