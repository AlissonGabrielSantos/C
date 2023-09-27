#include<stdio.h>
#define max 1000
int main (void) {
    int n, ord[max];
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < max; i++){
        ord[i] = 0;
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
        ord[vet[i]] = 1;
    }
    for (int i = 0; i < max; i++){
        if(ord[i])
            printf("%d ", i);
    }
}