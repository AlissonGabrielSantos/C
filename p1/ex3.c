#include<stdio.h>

int main(void){
    int num1, num2, num3, resultado;
    scanf("%d%d%d", &num1, &num2, &num3);
    for (int i = 1; i <= num1; i++){
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0) {
            resultado = i;
        }
    }
    printf("%d\n", resultado);
}