#include<stdio.h>
int main (void) {
    int n, num, menor=0, maior=0;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        if (num % 2 == 0) {
            if (num < menor)
                menor = num;
            if (num > maior)
                maior = num;
        }
    }
    printf("menor: %d\nmaior: %d\n", menor, maior);
}