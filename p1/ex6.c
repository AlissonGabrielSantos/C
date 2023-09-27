#include <stdio.h>
//não funcionou
int main(void){
    char str1[100], str2[100], str3[100] = {0};
    int i, j, k, chav;
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string:  ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++){
        for(j = 0; str2[j] != '\0'; j++){
            if(str1[i] == str2[j]){
                for(k = 0; k != '\0'; k++){
                    chav = 1;
                    if (str3[k] == str2[j]){
                        chav=0;  
                    }
                    if(chav){
                        str3[k] = str2[j];
                        break;
                        }
                }
            }
        }
    }
    str3[k+1] = '\0';
    printf("%s\n%s\n%s\n", str1, str2,str3);
}