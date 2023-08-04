#include <stdio.h>
#define MAX_NUM 5

int main(){
    int i, j, num = 1;
    for(i=1; i <= MAX_NUM; i++){
        for (j=1; j<=i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}