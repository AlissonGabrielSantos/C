#include<stdio.h>
char * mystrchr (const char str[], const char c){
    char *s1 = (char *)str;
    while(*s1){
        if (*s1 == c)
            return s1;
        s1++;
    }
    return NULL;
}
int main(void){
    char str1[] = "texto a ser comparado";
    char *res = NULL;
    res = mystrchr(str1, 'x');
    if (res) {
        printf("encontrado: %s\n", res);
    }
}