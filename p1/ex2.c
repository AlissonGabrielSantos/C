#include<stdio.h>
#define N 6
int main (void){
    int L, C, matriz[N][N];
    for (L=0;L<N; L++) {
        for (C=0;C<=L;C++) {
            matriz[L][C] = 0;
        }
    }
    for (L=0;L<=N-1; L++) {
        for (C=0;C<=L;C++) {
            if (C==0 || L==C) {
                matriz[L][C] = 1;
            } else {
                matriz[L][C] = matriz[L-1][C] + matriz[L-1][C-1];
            }
            printf("%d ", matriz[L][C]);
        }
        printf("\n");
    }

}