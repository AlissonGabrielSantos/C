#include <stdio.h>
/*  Faça um programa que leia 10 números inteiros e 
    apresente o maior (não utilize vetor/matriz). */

int main() {
    int num, maior, i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num > maior | i == 0) {
            maior = num;
        }
    }
    printf("%d\n", maior);
}