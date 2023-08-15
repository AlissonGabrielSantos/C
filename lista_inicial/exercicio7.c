#include <stdio.h>
/* ler um algarismo e printar o valor ASCII na tela */
int main(){ 
    int num;
    char simb;
    
    scanf("%d", &num);
    printf("%d\n", num);
    
    simb = getchar();
    printf("%d %c\n", simb, simb);
    
}