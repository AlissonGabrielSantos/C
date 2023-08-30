#include <stdio.h>
/*  Faça um programa que leia uma matriz de
    inteiros de 3x3 e apresente os elementos
    da diagonal principal.
*/
int main(void){
    int matriz[3][3];
    for (int i = 0, j = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("%d\n%d\n%d\n", matriz[0][0], matriz[1][1], matriz[2][2]);
}