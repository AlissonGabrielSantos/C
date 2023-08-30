#include<stdio.h>

void mystrcat(const char *s1, const char *s2){
    char *p = (char *)s1;
    char *q = (char *)s2;
    while(*p)
        p++;
    while(*q){
        *p=*q;
        p++;
        q++;
    }    
}

int main(void){
    char str1[50]="asa ", str2[]="branca";

    printf("str1 (%s) + str2 (%s) = ",str1, str2);
    mystrcat(str1,str2);
    printf("%s\n",str1);
}