#include <stdio.h>
#define MAX 16
int main() {
    int asc, col, lin;
    printf("  ");
    for (col = 0; col < MAX; col++) {
        printf("%2X", col);
    }
    printf("\n");
    for (lin = 0; lin < MAX; lin++) {
        printf("%2X ", lin);
        for (col = 0; col < MAX; col++) {
            int asc = lin * MAX + col;
            printf("%c ", (asc < 32) ? 32 : asc);
        }
        printf("\n");
    }
}