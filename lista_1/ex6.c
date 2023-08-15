#include <stdio.h>
/*  Faça um programa que leia uma lista de números inteiros
    terminados por 0, para cada número lido o programa deve
    informar o número e se o número é par ou ímpar. Não 
    utilize vetores/matrizes.*/

int main() {
    int num;
    do {
        scanf("%d", &num);
        if (num) {
            if (num & 1) {
                printf("%d impar\n", num);
            } else {
                printf("%d par\n", num);
            }
        }
    } while (num);
}