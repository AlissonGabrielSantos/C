#include <stdio.h>
#include <string.h>

int main(void){
    char nomes[10][20];
    int ind[10], aux;
    for(int i = 0; i < 10; i++){
        scanf ("%s",nomes[i]);
        ind[i] = i;
    }
    for (int i=0; i < 10; i++){
        printf("%d\n", ind[i]);
    }
    for (int i=0; i < 10; i++){
        for (int j=0; j < 10; j++){
            if ( strcmp(nomes[ind[i]], nomes[ind[j]]) < 0){
                aux = ind[i];
                ind[i] = ind[j];
                ind[j] = aux;
            }
        }
    }
    printf("\nOrdenado:\n\n");
    for (int i=0; i < 10; i++){
        printf("%s\n", nomes[ind[i]]);
    }
}
