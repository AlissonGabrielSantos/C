#include <stdio.h> //inclui a biblioteca de input e output
#define MAX_NUM 10 //para não usar os "números mágicos"

int main(){
    int i; //declara a variável "i" como inteira
    for (i=1; i <= MAX_NUM; i++) 
    {
        i&0x1==1 ? printf("\t%d\n", i):printf("%d",i);
        //utiliza um operador ternário, se a condição "i&0x01==1" (1 se for ímpar) for cumprida,
        //imprime na tela o valor de i com um \t (tab) se não for cumprida, apenas imprime //o número (há como adicionar o "\n" aqui, eu não quis)
    }
}