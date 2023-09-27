#include <stdio.h>

int main(void){
    int a, b, c, d;
    a = 0x12 + 013;
    b = 0xf4 & 0xf0; 
    c = 0xf0 | 0xf;
    d = 0x01 << 2;
    printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
}