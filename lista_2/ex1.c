#include<stdio.h>
/*
Faça um programa que leia 10 números,
armazene-os em um vetor e apresente os
5 (cinco) números que estão nas posições
ímpares.
*/
int main(void)
{
    int vetor[10];
    for(int i = 0; i<10; i++) {
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<10; i++) {
        if (i%2)
            printf("%d\n", vetor[i]);
    }
}