#include <stdio.h>

/*  Faça um programa que leia um número 
    N e apresente todos os divisores de 
    N (do menor para o maior, de 1 a N).*/

int main(){
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            printf("%d\n", i);
        }
    } // ele deu que isso tá incorreto????
}