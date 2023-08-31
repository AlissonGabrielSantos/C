#include<stdio.h>
char * mystrsub (const char *str, const char *c){
    char *s1b, *c2;
    char *s1 = (char *)str;
    while(*s1){
        if (*s1 == *c){
            s1b = s1;
            c2 = c;
            while(*c2){
                s1b++;
                c2++;
                if (*s1b != *c2){
                    break;
                }
            }
            if (*c2 == '\0')
                return s1;
        }
        s1++;
    }
    return NULL;
}
int main(void){
    char str1[] = "texto a ser comparado";
    char *res = NULL;
    res = mystrsub(str1, "para");
    if (res) {
        printf("encontrado: %s\n", res);
    }
}