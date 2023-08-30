#include<stdio.h>
/*
    Conte o número de caracteres de uma string.
*/
int mystrlen(const char str[]){
    int i = 0;
    
    while(str[i] != '\0')
        i++;
    return i;
}

int mystrlenp(const char *str){
    char *p = (char *)str;
    while(*p)
        p++;
    return(int)(p-str);
}
int main(void){
    printf("%d\n", mystrlenp("Tanto faz"));
}