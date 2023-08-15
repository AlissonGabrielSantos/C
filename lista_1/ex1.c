#include <stdio.h>
/*  
    Faça um programa que leia um número de ponto flutuante e 
    apresente em linhas separadas a parte inteira e a parte fracionária.
    OBS: Queria ter feito os 0's depois do ponto sumir na hora de imprimir
    o valor fracionário, e também não mostrar o "0.", mas o teste de caixa
    preta nao deixa :/
 */
int main() {
    int inteiro;
    float num;
    scanf("%f", &num);
    inteiro = (int) num;
    printf("%d\n", inteiro);
    printf("%f\n", num - inteiro);

    return 0;
}