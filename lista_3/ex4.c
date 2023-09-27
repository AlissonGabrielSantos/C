#include<stdio.h>
#include<string.h>

/*
E24) Faça um programa que leia um número, chame uma função que converterá 
o número binário para Strings, sem os dígitos não significativos a esquerda. 
No programa principal, apresente o vetor retornado usando o %s no printf.
*/
void reverso(char str[]){
    int i, j;
    char aux;
    for(i = 0, j = strlen(str)-1; i < strlen(str)/2; i++, j--){
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }
}

void converte(char string[], int num){
    int resto, i = 0;
    while(num){
        resto = (num % 2);
        num = (int)(num/2);
        string[i] = (char)resto + '0';
        i++;
    }
    string[i] = '\0';
    reverso(string);
}

int main(){
    int num;
    char string[33] = {0};
    scanf("%d", &num);
    converte(string, num);
    printf("%s\n", string);
}