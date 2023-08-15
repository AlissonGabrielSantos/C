#include <stdio.h>
#define MAX_NUM 100

int main(){   
int i, j, cont = 0;
    for(i = 0; i <= MAX_NUM; i++){
        cont = 0; 
        for (j=1; j<=i; j++){
            if (i%j==0){
             cont++;
            }
        }
        if (cont==2){
            printf("%d\n", i);
        }
    }
}