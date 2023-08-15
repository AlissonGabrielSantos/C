#include <stdio.h>
/*  Faça um programa que leia três números e os 
    apresente em ordem crescente. Apresente um 
    número por linha.*/

int main() {
    int num, num1, num2, num3;
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2) {
        num = num1;
        num1 = num2;
        num2 = num;
    }
    if (num1 > num3) {
        num = num1;
        num1 = num3;
        num3 = num;
    }
    if (num2 > num3) {
        num = num2;
        num2 = num3;
        num3 = num;
    }
    printf("%d\n%d\n%d\n", num1, num2, num3);
}