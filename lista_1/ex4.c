#include <stdio.h>
/*  Faça um programa que apresente os números de 20 a 1 
    (em ordem decrescente), um número em cada linha. */

int main() {
    int i;
    for (i = 20; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}