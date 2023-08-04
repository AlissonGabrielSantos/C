#include <stdio.h>
#define MAX_NUM 15

int main() {
    int i, num = 1;
    for (i = 1; i <= MAX_NUM; i++) {
        printf("%d ", i);
        if (i == (num * (num + 1)) / 2) {
            printf("\n");
            num++;
        }
    }
    return 0;
}
