#include <stdio.h>
/*  Faça um programa que apresente os números de 
    pares de 0 a 20, cada número em uma linha. */

int main() {
    int i;
    for (i = 1; i <= 20; i++) {
        if(!(i&1)){
        printf("%d\n", i);
        }
    }
    return 0;
}