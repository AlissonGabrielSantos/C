#include <stdio.h>
#define MAX_NUM 16

int main() {
    int asc, col, lin;
    printf("  ");
    for (int col = 0; col < MAX_NUM; col++) {
        printf("%2x", col);
    }
    printf("\n");

    for (int lin = 0; lin < MAX_NUM; lin++) {
        printf("%2X ", lin);
        for (int col = 0; col < MAX_NUM; col++) {
            int asc = lin * MAX_NUM + col;
            printf("%c ", (asc < 32) ? 32 : asc);
        }
        printf("\n");
    }

    return 0;
}