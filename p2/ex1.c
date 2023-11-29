#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* em nenhum momento o Bloco *vet deverá ser tratado como vetor,
não se deve usar colchetes para acessar os elementos */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    float num = -32767.0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float *ptr = (float *)calloc(n, sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("Digite um valor decimal: ");
        scanf("%f", (ptr + i));
    }

    for (int i = 0; i < n; i++)
    {
        printf("%f<-", *(ptr + i));
        if (num < *(ptr + i))
            num = *(ptr + i);
    }
    printf("%f", num);
    free(ptr);
    return 0;
}