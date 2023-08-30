#include<stdio.h>
int mystrcmp(const char *s1, const char *s2){
    char *p = (char *)s1, *q = (char *)s2;
    while ((*p && *q)){
        p++;
        q++;
        if (*p != *q)
            return *p-*q;
    }
}
int main(void){
    char str1[] = "texto 1", str2[] = "texto 1";
    int resultado = mystrcmp(str1,str2);
    if(resultado>0)
        printf("st1 > str2\n");
    else if (resultado < 0)
        printf("str1 < str2\n");
    else
        printf("São iguais\n");
}