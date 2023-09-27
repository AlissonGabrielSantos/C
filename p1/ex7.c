#include <stdio.h>

int main(void){
    char str1[100], str2[100];
    int i, j, cont = 0;

    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string:  ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++){
        for(j = 0; str2[j] != '\0'; j++){
            if(str1[i] == str2[j]){
                cont++;
                break;
            }
        }
    }

    if(cont == i){
        printf("Sao anagramas.\n");
    }else{
        printf("Nao sao anagramas.\n");
    }

    return 0;
}