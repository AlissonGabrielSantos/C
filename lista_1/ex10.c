#include <stdio.h>

/*  Faça um programa que leia dois números A e B e apresente
    o maior divisor comum dos dois números.*/

int main(){
    int num1, num2, resultado;
    scanf("%d%d", &num1, &num2);
    for (int i = 1; i <= ((num1+num2)/2); i++){
        if (num1 % i == 0 && num2 % i == 0) {
            resultado = i;
        }
    }
    printf("%d\n", resultado);
}